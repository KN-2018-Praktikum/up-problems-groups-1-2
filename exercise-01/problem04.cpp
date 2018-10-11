#include <iostream>

using namespace std;

int main() {

    // Declaration of the variables
    double radius, xCoord, yCoord;

    // Reading the variables from the console
    cin >> radius;
    cin >> xCoord >> yCoord;

    // Checking if the coordinates of the point are inside of the given circle
    bool answer = xCoord * xCoord + yCoord * yCoord <= radius * radius;

    // Printing the result on the console.  For the keyword -- boolalpha -- see reference in the README file for the exercise.
    cout << boolalpha << answer << endl;

    return 0;
}
