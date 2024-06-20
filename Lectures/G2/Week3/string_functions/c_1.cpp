#include <iostream>
#include <string>

using namespace std;


int main() {
    string s = "weather";

    cout << s << endl;

    s.insert(7, " is hot"); 
    // s.insert(starting_index, str_to_insert);

    cout << "after s.insert(7, \" is hot\"):\n" << s << endl;

    // at this point s contains "weather is hot"

    s.insert(10, " too"); 

    cout << "after s.insert(10, \" too\"):\n" << s << endl;

    // at this point s contains "weather is too hot"

    s.insert(0, "The "); 

    cout << "s.insert(0, \"The \"):\n" << s << endl;

    // at this point s contains "The weather is too hot"

    s.insert(17, 5, 'o');
    // s.insert(s.begin() + 17, 5, 'o') will also work
    // it uses iterator instead of index

    cout << "s.insert(17, 5, 'o'):\n" << s << endl;

    // at this point s contains "The weather is tooooooo hot"

    return 0;
}