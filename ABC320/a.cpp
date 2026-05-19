// https://atcoder.jp/contests/abc320/tasks/abc320_a
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    cout << (int)(pow(a, b) + pow(b, a)) << endl;
}
