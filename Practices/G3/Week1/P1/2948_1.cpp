#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int hours, minutes, seconds;
    hours = n / 3600;
    minutes = n % 3600 / 60;
    seconds = n % 3600 % 60;

    if(minutes < 10 && seconds < 10) {
        cout << hours << ":0" << minutes << ":0" << seconds << endl;
    } 
    else if(minutes < 10) {
        cout << hours << ":0" << minutes << ":" << seconds << endl;
    }
    else if(seconds < 10) {
        cout << hours << ":" << minutes << ":0" << seconds << endl;
    }
    else {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }


    return 0;
}