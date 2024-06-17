#include <iostream>

using namespace std;

int main() {
    
    for(int i = 32; i < 127; ++i) {
        cout << "ASCII code: " << i << ", ";
        cout << "char: " << char(i) << endl;
    }

    return 0;
}