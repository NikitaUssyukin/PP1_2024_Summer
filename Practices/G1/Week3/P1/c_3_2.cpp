#include <iostream>

using namespace std;

int main() {
    string s;

    int maxStartInd = 0;
    int currStartInd = 0;
    
    int maxSize = 0;
    int currentSize = 0;

    getline(cin, s);

    for(int i = 0; i < s.size(); i++) {
        if(s[i] != ' ') {
            currentSize += 1;
        }
        else {
            if(maxSize < currentSize) {
                maxSize = currentSize;
                maxStartInd = currStartInd;
            }
            currStartInd = i + 1;
            currentSize = 0;
        } 
        // cout << "maxString: " << maxString << endl;
        // cout << "---------------\n";
    }

    for(int i = maxStartInd; i < maxStartInd + maxSize; ++i) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}