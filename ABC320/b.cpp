// https://atcoder.jp/contests/abc320/tasks/abc320_b
// https://www.geeksforgeeks.org/dsa/longest-palindromic-substring/

#include <iostream>
using namespace std;

int getLongestPal(string &s) {
    
    int n = s.length();
    int start = 0, maxLen = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 1; j++) {
            int low = i;
            int high = i + j; 

            while (low >= 0 && high < n && s[low] == s[high]) 
            {
                int currLen = high - low + 1;
                if (currLen > maxLen) {
                    start = low;
                    maxLen = currLen;
                }
                low--;
                high++;
            }
        }
    }

    return maxLen;
}

int main() {
    string s;
    cin >> s;
    cout << getLongestPal(s) << endl;
    return 0;
}
