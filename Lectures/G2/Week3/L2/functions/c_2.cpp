#include <iostream>

using namespace std;

int return0() {
    return 0;
}

int return1() {
    return 1;
}

int main() {
    int zero = return0();

    cout << zero << endl;
    cout << return1() << endl;

    
}