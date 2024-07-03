#include <iostream>
#include <deque>

using namespace std;

int main() {
    string digits;
    cin >> digits;

    deque<char> dq;

    for(int i = 0; i < digits.size(); ++i) {
        if(dq.empty()) {
            dq.push_back(digits[i]);
            continue; 
        }
        if(dq.back() == '1' && digits[i] == '1') {
            dq.pop_back();
            continue;
        }
        dq.push_back(digits[i]);
    }

    for(int i = 0; i < dq.size(); ++i) {
        cout << dq[i];
    }
    cout << endl;

    return 0;
}