#include <iostream>
#include <string> 

using namespace std;

int main() {
    string s1 = "cat";
    string s2, s3;
    s3 = s2 = s1;

    s3[2] = s2[0] = 'r';

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    return 0;
}