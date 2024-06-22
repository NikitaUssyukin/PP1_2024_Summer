#include <iostream>
#include <string>

using namespace std;


int main() {
    string s = "The weather is too hot";

    cout << s << endl;

    s.erase(0, 4); 
    //s.erase(starting_index, count_of_characters_to_erase);

    cout << "after erase(0, 4):\n" << s << endl;

    // at this point s contains "weather is too hot"

    s.erase(11, 4);

    cout << "after erase(12, 4):\n" << s << endl;

    // at this point s contains "weather is hot"

    s.erase(7);

    cout << "after erase(7):\n" << s << endl;

    return 0;
}