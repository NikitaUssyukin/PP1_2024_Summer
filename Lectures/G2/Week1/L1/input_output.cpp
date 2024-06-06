#include <iostream>

using namespace std;

/*
I/O (input and output)

for input we use the "cin" command with >> operator
for each input operation we need to add a new >> operator
e.g.:
cin >> var1 >> var2;

for output we use the "cout" command with << operator
for each output operation we need to add a new << operator
e.g.:
cout << var1 << var2;

"endl" command outputs a new line to the terminal
it is similar to using the newline character '\n'

=

*/

int main() {
    int a, b, c;

    cin >> a;
    cin >> b >> c;

    cout << a << endl;
    cout << b << " " << c << '\n';

    return 0;
}