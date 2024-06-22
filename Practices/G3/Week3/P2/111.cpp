// INCOMPLETE SOLUTION

#include <iostream>

using namespace std;

int main() {
    string direction;
    int steps;

    int x = 0, y = 0;

    while(cin >> direction) { // taking direction as an input infinitely
        cin >> steps;

        if(direction == "North") y += steps;
    }

    return 0;
}