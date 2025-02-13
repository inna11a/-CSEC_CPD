#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int e = 0;
    if (a != b && a != c && a != d) e++;
    if (b != c && b != d) e++;
    if (c != d) e++;
    e = 4 - (e + 1);

    cout << e << endl;

    return 0;
}
