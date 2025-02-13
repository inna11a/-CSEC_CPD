#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int b[30], c[30];
    for (int i = 0; i < a; ++i) {
        cin >> b[i] >> c[i];
    }
    
    int d = 0;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            if (i != j && b[i] == c[j]) {
                d++;
            }
        }
    }
    
    cout << d << endl;
    
    return 0;
}
