#include <iostream>
#include <string> 

using namespace std;

int main() {
    string s1, s2;

    cin >> s1 >> s2;

    cout << "s1 == s2: " << (s1 == s2) << endl;

    cout << "s1 != s2: " << (s1 != s2) << endl;
    
    cout << "s1 < s2: " << (s1 < s2) << endl;

    cout << "s1 <= s2: " << (s1 <= s2) << endl;

    cout << "s1 > s2: " << (s1 > s2) << endl;

    cout << "s1 >= s2: " << (s1 >= s2) << endl;

    return 0;
}