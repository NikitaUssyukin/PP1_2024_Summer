#include <iostream>
#include <map>

using namespace std;

int main() {
    int amountOfRequests;
    cin >> amountOfRequests;

    map<string, int> m;

    for(int i = 0; i < amountOfRequests; ++i) {
        string request;
        cin >> request;

        if(request == "INSERT") {
            string key;
            int value;
            cin >> key >> value;
            m[key] = value;
        }
        else if(request == "RETRIEVE") {
            string key;
            cin >> key;
            if(m.count(key)) {
                cout << "Key " << key << " found ";
                cout << "with value of " << m[key] << endl;
            }
            else {
                cout << "Key " << key << " not found\n";
            }
        }
        else if(request == "DELETE") {
            string key;
            cin >> key;
            if(m.count(key)) {
                m.erase(key);
                cout << "Key " << key << " was deleted";
            }
            else {
                cout << "Key " << key << " not found\n";
            }
        }
        else if(request == "COUNT") {
            cout << "Count of elements in a map: " << m.size() << endl;
        }
        else if(request == "SHOW_ALL") {
            map<string, int>::iterator it;
            for(it = m.begin(); it != m.end(); ++it) {
                cout << it->first << " " << it->second << endl;
            }
            cout << "----------\n";
        }
    }

    return 0;
}