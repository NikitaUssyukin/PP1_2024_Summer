#include <iostream>

using namespace std;

int main() {
    int i = 1;
    
    for(;;) {
        if(i > 10) {
            break;
        } 
        else if(i % 2 == 0) {
            ++i;
            continue;
        }
        cout << i << " ";
        ++i;
    }
    cout << "\nLiftoff!\n";
    

    return 0;
}