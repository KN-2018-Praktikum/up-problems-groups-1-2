#include<iostream>

using namespace std;

int main() {
    int a, b, c, k;

    cin >> a >> b >> c >> k;
    int maxDigit = -1;

    if (k == 1) {
        a /= 100;
        b /= 100;
        c /= 100;
    } else if (k == 2) {
        a = (a % 100) / 10;
        b = (b % 100) / 10;
        c = (c % 100) / 10;
    } else if (k == 3) {
        a = a % 10;
        b = b % 10;
        c = c % 10;
    }

    if(a > 4) {
        maxDigit = a;
    }

    if(b > 4 && b > maxDigit) {
        maxDigit = b;
    }

    if(c > 4 && c > maxDigit) {
        maxDigit = c;
    }

    if(maxDigit == -1) {
        cout << "No" << endl;
    } else {
        cout << maxDigit << endl;
    }
    return 0;
}
