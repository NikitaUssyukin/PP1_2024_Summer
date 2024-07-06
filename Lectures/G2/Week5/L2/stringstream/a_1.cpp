#include <iostream>
#include <sstream> // header for stringstream

using namespace std;

int main() {
    string input_str;
    getline(cin, input_str);

    istringstream iss(input_str);

    int a;
    double b;
    char c;

    iss >> a >> b >> c;

    cout << a << " " << b << " " << c << endl;

    return 0;
}