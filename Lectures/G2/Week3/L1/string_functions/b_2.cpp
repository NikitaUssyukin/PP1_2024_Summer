#include <iostream>
#include <string>

using namespace std;


int main() {
    string s = "The weather is too hot";

    cout << s << endl;

    s.erase(s.begin(), s.begin() + 4); 
    //s.erase(starting_index, count_of_characters_to_erase);

    cout << "after s.erase(s.begin(), s.begin() + 4):\n" << s << endl;

    // at this point s contains "weather is too hot"

    s.erase(s.begin() + 11, s.begin() + 15);

    cout << "after s.erase(s.begin() + 11, s.begin() + 15):\n" << s << endl;

    // at this point s contains "weather is hot"

    s.erase(s.begin() + 7, s.end());

    cout << "after s.erase(s.begin() + 7):\n" << s << endl;

    return 0;
}