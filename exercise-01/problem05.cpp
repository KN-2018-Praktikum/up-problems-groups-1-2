#include <iostream>

using namespace std;

int main() {

    // Declaration of the variables
    int a, b, c;

    // Reading the variables from the console
    cin >> a >> b >> c;

    if ((b < a && a < c) || (c < a && a < b)) { // Checking if a is the middle number
        cout << "The middle number is: " << a << endl;
    }
    else if ((a < b && b < c) || (c < b && b < a)) { // Checking if b is the middle number
        cout << "The middle number is: " << b << endl;
    }
    else if ((a < c && c < b) || (c < a && b < c)) { // Checking if c is the middle number
        cout << "The middle number is: " << c << endl;
    }
    else { // Some of the numbers have equal values
        cout << "There is no middle number!" << endl;
    }

    return 0;
}
