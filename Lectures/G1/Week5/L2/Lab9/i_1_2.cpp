#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> logins;

    for(int i = 0; i < n; ++i) {
        string login;
        cin >> login;
        if(logins.find(login) != logins.end()) {
            cout << "user already exists\n";
        }
        else {
            logins.insert(login);
            cout << "new user added\n";
        }
    }

    return 0;
}