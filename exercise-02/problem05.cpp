#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    cout << a;

    if((b / 10) == a % 10) {
        cout << "\'" << b %10;
    } else {
        cout << b;
    }

     if((c / 10) == b % 10) {
        cout << "\'" << c %10 << endl;
    } else {
        cout << c << endl;
    }

    return 0;
}
