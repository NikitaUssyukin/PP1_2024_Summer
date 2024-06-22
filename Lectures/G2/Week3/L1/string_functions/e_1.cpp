#include <iostream>
#include <string>

using namespace std;


int main() {
    string s = "The weather is too hot";

    cout << "s.find(\"weather\"):\n" << s.find("weather") << endl;

    cout << "s.find(\"forecast\"):\n" << s.find("forecast") << endl;

    cout << "s.find(\"forecast\") == string::npos:\n";
    cout << (s.find("forecast") == string::npos) << endl;

    return 0;
}