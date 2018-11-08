#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    float x1, x2;

    c -= d;

    int discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (discriminant == 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        cout << "No real roots."  << endl;
    }

    return 0;
}
