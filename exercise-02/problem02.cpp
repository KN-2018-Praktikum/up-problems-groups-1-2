#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if(a != b) {
        if(a != c) {
            if(b != c) {
                cout << a << b << c << b << a << endl;
            } else {
                cout << a << b << c << a << endl;
            }
        } else {
            cout << a << b << c << endl;
        }
    }
    else {
        if (b != c) {
            cout << a << b << c << b << a << endl;
        } else {
            cout << a << b << c << endl;
        }
    }

    return 0;
}
