#include <iostream>

using namespace std;



int main() {
    for(int i = 0; i <= 9; ++i) {
        cout << "int i: " << i << "; "; 
        cout << "ASCII: " << i + '0' << ", ";
        cout << "character under ASCII: " << char(i + '0')  << endl; 
    }

    return 0;
}