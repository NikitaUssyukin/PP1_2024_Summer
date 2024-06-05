#include <iostream>

using namespace std;

int main() {
    int i = 11;
    
    do {
        cout << i << " ";
        ++i;
    } while(i <= 10);
    cout << "\nLiftoff!\n";
    

    return 0;
}