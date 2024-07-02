#include <iostream>

using namespace std;

int main() {
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        if(s.find("@gmail.com") != string::npos) {
            s.erase(s.find("@gmail.com"));
            cout << s << endl;
        }
    }

    return 0;
}