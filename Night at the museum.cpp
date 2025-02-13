#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int t = 0;
    char c = 'a';
    for (char d : s) {
        int x = abs(d - c);
        int y = 26 - x;
        t += min(x, y);
        c = d;
    }
    cout << t << endl;
    return 0;
}
New chat
