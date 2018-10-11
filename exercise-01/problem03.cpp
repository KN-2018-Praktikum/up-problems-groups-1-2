#include <iostream>

using namespace std;

int main() {

    // Declaration of the variables
    double xCoord, yCoord;

    // Reading the variables from the console
    cin >> xCoord >> yCoord;

    // Checking if the coordinates of the point are inside of the given rectangle
    bool result = xCoord >= 1 && xCoord <= 5 && yCoord >= 1 && yCoord <= 3;

    // Printing the result on the console.  For the keyword -- boolalpha -- see reference in the README file for the exercise.
    cout << boolalpha << result << endl;

    return 0;
}
