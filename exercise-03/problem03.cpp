#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n, a;
    cin >> n >> a;

    int minDistance = 10000000;
    float sqrDis = a / 2.0;


    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        int distance = abs(x) + abs(y);

        if((x > sqrDis || x < -sqrDis || y > sqrDis || y < -sqrDis) && distance < minDistance) {
            minDistance = distance;
        }
    }

    if(minDistance == 10000000) {
       minDistance = 0;
    }

    cout << minDistance << endl;
    return 0;
}
