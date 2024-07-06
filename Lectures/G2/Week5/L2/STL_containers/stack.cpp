#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        st.push(temp);
    }

    while(!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}