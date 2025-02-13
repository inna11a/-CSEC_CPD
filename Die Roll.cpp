#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int y, w;
    cin >> y >> w;

    int m = max(y, w);
    int f = 7 - m;
    int g = gcd(f, 6);

    int a = f / g;
    int b = 6 / g;

    cout << a << "/" << b << endl;
    return 0;
}
