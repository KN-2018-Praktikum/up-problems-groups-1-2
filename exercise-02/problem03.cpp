#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int firstDH, firstDM, firstAH, firstAM;
    int secondDH, secondDM, secondAH, secondAM;
    int thirdDH, thirdDM, thirdAH, thirdAM;

    cin >> firstDH >> firstDM >> firstAH >> firstAM;
    cin >> secondDH >> secondDM >> secondAH >> secondAM;
    cin >> thirdDH >> thirdDM >> thirdAH >> thirdAM;

    int firstTotalMinutes = firstAH * 60 + firstAM - (firstDH * 60 + firstDM);

    if(firstTotalMinutes < 0) {
        firstTotalMinutes += 1440;
    }

    int secondTotalMinutes = secondAH * 60 + secondAM - (secondDH * 60 + secondDM);

    if(secondTotalMinutes < 0) {
        secondTotalMinutes += 1440;
    }

    int thirdTotalMinutes = thirdAH * 60 + thirdAM - (thirdDH * 60 + thirdDM);

    if(thirdTotalMinutes < 0) {
        thirdTotalMinutes += 1440;
    }

    int min = 0, max = 0;

    if(firstTotalMinutes <= secondTotalMinutes) {
            min = firstTotalMinutes;
            max = secondTotalMinutes;
    } else {
            min = secondTotalMinutes;
            max = firstTotalMinutes;
    }

    if(thirdTotalMinutes < min) {
           min = thirdTotalMinutes;
    }

    if(thirdTotalMinutes > max) {
         max = thirdTotalMinutes;
    }

    cout << min / 60 << ":" << setw(2) << setfill('0') << min % 60 << endl;
    cout << max / 60 << ":" << setw(2) << setfill('0') << max % 60 << endl;

    return 0;
}
