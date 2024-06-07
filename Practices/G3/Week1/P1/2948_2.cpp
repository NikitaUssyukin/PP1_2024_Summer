#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int hours, minutes, seconds;
    hours = n / 3600;
    minutes = n % 3600 / 60;
    seconds = n % 3600 % 60;

    cout << hours;

    if(minutes < 10) {
        cout << ":0" << minutes;
    }
    else {
        cout << ":" << minutes;
    }

    if(seconds < 10) {
        cout << ":0" << seconds;
    }
    else {
        cout << ":" << seconds;
    }

    return 0;
}