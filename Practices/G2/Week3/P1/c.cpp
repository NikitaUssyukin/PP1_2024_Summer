#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    if(N % 2 == 0) {
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++j) {
                if(j <= i) cout << '#';
                else cout << '.';
            }
            cout << endl;
        }
        
    } 
    else {
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++j) {
                if(N - 1 - i <= j) cout << '#';
                else cout << '.';
            }
            cout << endl;
        }
    }

    return 0;
}