#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string input_str;
    getline(cin, input_str);

    istringstream iss(input_str);

    int a[1000] = {};
    int i = 0;
    int arraySize;
    int temp;

    while(iss >> temp) {
        a[i] = temp;
        ++i;
    }

    arraySize = i;

    int x;
    cin >> x;

    int missing_size = 1001;
    int missing[missing_size] = {};
    for(int i = 0; i < arraySize; ++i) {
        missing[a[i]] = 1;
    }

    int position = 1;
    for(int i = 1; i < missing_size; ++i) {
        if(missing[i] == 0) {
            if(position == x) {
                cout << i << endl;
                return 0;
            }
            ++position;
        }
    }

    cout << -1 << endl;

    return 0;
}