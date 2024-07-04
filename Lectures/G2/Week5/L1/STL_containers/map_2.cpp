#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m;

    /*
    Requests: 
    INSERT key value
    RETRIEVE key
    DELETE key
    MODIFY key value
    COUNT
    CLEAR 
    SHOW_ALL
    QUIT
    */ 

    int n; // number of requests
    cin >> n;

    cout << "\n----------\n";

    for(int i = 0; i < n; ++i) {
        string request;
        cin >> request;
        
        string key;
        int value;

        if(request == "INSERT") {
            cin >> key >> value;
            m[key] = value;
        }
        else if(request == "RETRIEVE") {
            cin >> key;
            if(m.count(key)) {
                cout << "Element with the key \"" << key << "\" was found. ";
                cout << "The value is " << m[key] << endl;
            } 
            else {
                cout << "Element with the key \"" << key << "\" was not found.\n";
            }
            cout << "----------\n";
        }
        else if(request == "DELETE") {
            cin >> key;
            if(m.count(key)) {
                m.erase(key);
                cout << "Element with the key \"" << key << "\" was deleted.\n";
            } 
            else {
                cout << "Element with the key \"" << key << "\" was not found.\n";
            }
            cout << "----------\n";
        }
        if(request == "MODIFY") {
            cin >> key >> value;
            if(m.count(key)) {
                m[key] = value;
                cout << "Element with the key \"" << key << "\" was modified.\n";
            } 
            else {
                cout << "Element with the key \"" << key << "\" was not found.\n";
            }
            cout << "----------\n";
        }
        else if(request == "COUNT") {
            cout << "Count of the elements: " << m.size() << endl;
            cout << "----------\n";
        }
        else if(request == "CLEAR") {
            m.clear();
            cout << "The map was cleared.\n";
            cout << "----------\n";
        }
        else if(request == "SHOW_ALL") {
            cout << "Contents of the map:\n";

            map<string, int>::iterator it;
            for(it = m.begin(); it != m.end(); ++it) {
                cout << it->first << " " << it->second << endl;
            }
            cout << endl;

            cout << "----------\n";
        }
        else if(request == "QUIT") {
            cout << "Thank you for your time. Goodbye!\n";
            cout << "----------\n";
            return 0;
        }
    }

    return 0;
}