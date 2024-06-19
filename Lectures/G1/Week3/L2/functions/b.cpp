#include <iostream>

using namespace std;

string greet() {
    return "Hello from greet()!";
}

void greet_void_1() {
    cout << "Hello from greet_void_1!" << endl;
}

void greet_void_2() {
    cout << greet() << endl;
}

int main() {

    cout << greet() << endl;

    greet_void_1();

    greet_void_2();

    return 0;
}