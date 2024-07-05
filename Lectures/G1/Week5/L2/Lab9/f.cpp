/*
(()())

(

((

(

((

(

empty
*/

/*
)(()())

)

)(

)((

)(

)((

)(

) - not empty
*/

#include <iostream>
#include <stack>

using namespace std;

int main() {
    string brackets;
    cin >> brackets;

    stack<char> st;

    for(int i = 0; i < brackets.size(); ++i) {
        if(st.empty()) {
            st.push(brackets[i]);
            continue;
        }
        if(st.top() == '(' && brackets[i] == ')') st.pop();
        else st.push(brackets[i]);
    }

    if(st.empty()) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}