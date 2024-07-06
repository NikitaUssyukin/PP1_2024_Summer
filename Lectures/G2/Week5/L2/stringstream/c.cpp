#include <iostream>
#include <sstream> // header for stringstream
#include <set>
#include <vector>

using namespace std;

/*
Take n lines of integer numbers as an input
And then take the number that you want to find (target)
In the end we output which lines contain the target was found
*/

int main() {

    string input_str;
    istringstream iss;

    getline(cin, input_str);
    iss.str(input_str);

    int n;
    iss >> n;

    vector<set<int> > v_of_sets(n);
    
    for(int i = 0; i < n; ++i) {
        input_str.clear();
        iss.clear();
        getline(cin, input_str);
        iss.str(input_str);

        int temp;
        while(iss >> temp) {
            // cout << "inserting into set " << i << endl; 
            v_of_sets[i].insert(temp);
        }
    }

    int target;
    cin >> target;

    for(int i = 0; i < n; ++i) {
        if(v_of_sets[i].count(target)) cout << "Target found in the set " << i << "!\n";
    }
    
    return 0;
}