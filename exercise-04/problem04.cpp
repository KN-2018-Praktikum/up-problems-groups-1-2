#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    char ch;

    for(int i = 0; i < n; i++) {
        cin >> ch;

        if(ch < 97) {
            cout << ch -64;
        } else {
            cout << ch - 96;
        }
    }

    cout << endl;

    return 0;
}
