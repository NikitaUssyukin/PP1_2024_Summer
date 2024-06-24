#include <iostream>
#include <algorithm>

using namespace std;

string dec_to_bin(int dec) {
    if(dec == 0) return "";
    if(dec == 1) return "1";
    return char(dec % 2 + '0') + dec_to_bin(dec / 2); 
}

int main() {
    int n;
    cin >> n;

    string bin = dec_to_bin(n);

    reverse(bin.begin(), bin.end());
    // reverse(bin.begin(), bin.begin() + bin.size()); 
    // also works in the same way


    cout << bin << endl;

    return 0;
}