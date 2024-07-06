#include <iostream>
#include <map>

using namespace std;

int main() {
    // freopen("output.txt", "w", stdout);

    map<string, string> users;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string login, password;
        cin >> login >> password;

        users[login] = password;
    }
    
    int m;
    cin >> m;

    while(m != 0) {
        string login, password;
        cin >> login >> password;
        if(users.find(login) == users.end()) cout << "login error\n";
        else if(users[login] != password) cout << "password error\n";
        else cout << "correct password\n";
        --m;
    }

    return 0;
}