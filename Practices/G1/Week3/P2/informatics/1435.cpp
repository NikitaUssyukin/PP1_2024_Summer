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

    bool checkIP = true;

    while(checkIP) {
        if(startPos == 0 && !isdigit(s[startPos])) {
            is_IP_address = false;
            break;
        }

        if(s.find('.', pointPos + 1) != string::npos) {
            pointPos = s.find('.', pointPos + 1);
        } 
        else {
            pointPos = s.size();
        } 

        // cout << "positions: " << startPos << " " << pointPos << endl;

        string number = s.substr(startPos, pointPos - startPos);

        // cout << number << endl;

        if(number.size() > 3 || number.empty()) {
            checkIP = false;
            is_IP_address = false;
        } 
        else if(number.size() == 3) {
            if(number > "255") {
                checkIP = false;
                is_IP_address = false;
            }
        }

        startPos = pointPos + 1;

        if(pointPos == s.size()) {
            checkIP = false;
        }
    }

    cout << is_IP_address << endl;

    return 0;
}