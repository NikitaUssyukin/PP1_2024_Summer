// Incomplete solution, 14/15 test passed

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    bool is_IP_address = true;

    int startPos = 0;
    int pointPos = 0;

    int pointCount = 0;
    bool checkIP = true;

    while(pointCount <= 3 && checkIP) {
        if(startPos == 0 && !isdigit(s[startPos])) {
            is_IP_address = false;
            break;
        }

        if(pointPos == 0 && s.find('.', pointPos) == string::npos) {
            is_IP_address = false;
            break;
        }

        if(s.find('.', pointPos + 1) != string::npos) {
            pointPos = s.find('.', pointPos + 1);
            ++pointCount;
        } 
        else {
            pointPos = s.size();
            checkIP = false;
        } 

        // cout << "positions: " << startPos << " " << pointPos << endl;

        string number = s.substr(startPos, pointPos - startPos);

        // cout << number << endl;

        if(number > "255") {
            is_IP_address = false;
            break;
        }

        startPos = pointPos + 1;
    }

    if(pointCount > 3) {
        is_IP_address = false;
    }

    cout << is_IP_address << endl;

    return 0;
}