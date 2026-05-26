// https://atcoder.jp/contests/abc321/tasks/abc321_a

#include <iostream>
#include <string>

using namespace std;

// This function only cares about the LOGIC.
// It returns true if the string is 321-like, and false otherwise.
bool is321Like(string s) {
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] <= s[i+1]) {
            return false; // Found a violation, exit the function immediately
        }
    }
    return true; // If the loop finishes without failing, it's valid!
}

bool is321Like(long long n){
    // A single-digit number is always "321-like"
    int last_digit = -1;
    
    while (n > 0) {
        int current_digit = n % 10;
        
        // As we move right-to-left, digits must strictly increase.
        // So, current_digit must be GREATER than the last_digit we saw.
        if (current_digit <= last_digit) {
            std::cout << "No\n";
            return 0; // Exit early the moment the condition fails
        }
        
        last_digit = current_digit;
        n /= 10;
    }

    std::cout << "Yes\n";
    return 0;
}

int main() {
    // Fast I/O lines stay at the very top of main
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    // Call the function and print the result based on what it returns
    if (is321Like(s)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}

