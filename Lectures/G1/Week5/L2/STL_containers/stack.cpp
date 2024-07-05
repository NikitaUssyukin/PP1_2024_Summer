#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;

    cout << "------------\n";
    cout << "st.empty(): " << st.empty() << endl;
    cout << "st.size(): " << st.size() << endl;
    cout << "------------\n\n";

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        st.push(x);
    }

    cout << "\n------------\n";
    cout << "st.empty(): " << st.empty() << endl;
    cout << "st.size(): " << st.size() << endl;
    cout << "------------\n\n";

    while(!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    cout << "\n------------\n";
    cout << "st.empty(): " << st.empty() << endl;
    cout << "st.size(): " << st.size() << endl;
    cout << "------------\n\n";

    return 0;
}