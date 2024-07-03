#include <iostream>
#include <vector>

using namespace std;

int main() {
    string digits;
    cin >> digits;

    vector<char> queue;

    for(int i = 0; i < digits.size(); ++i) {
        if(queue.empty()) {
            queue.push_back(digits[i]);
            continue; 
        }
        if(queue.back() == '1' && digits[i] == '1') {
            queue.pop_back();
            continue;
        }
        queue.push_back(digits[i]);
    }

    for(int i = 0; i < queue.size(); ++i) {
        cout << queue[i];
    }
    cout << endl;

    return 0;
}