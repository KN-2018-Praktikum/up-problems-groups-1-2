#include <iostream>

using namespace std;

int main() {

    int hour;

    cin >> hour;

    if(hour < 0 || hour > 23) {
        cout << "Invalid time!" << endl;
    }
    else if(hour < 10) {
        cout << "Good morning!" << endl;
    }
    else if(hour < 18) {
        cout << "Good afternoon!" << endl;
    }
    else if(hour < 22) {
        cout << "Good evening!" << endl;
    }
    else {
        cout << "Why aren't you sleeping?" << endl;
    }

    return 0;
}
