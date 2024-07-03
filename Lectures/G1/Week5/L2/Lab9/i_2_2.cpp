#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> logins;

    for(int i = 0; i < n; ++i) {
        string login;
        cin >> login;
        if(logins[login] == 1) {
            cout << "user already exists\n";
        }
        else {
            logins[login] = 1;
            cout << "new user added\n";
        }
    }

    return 0;
}