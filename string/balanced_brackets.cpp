#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    for(char c : s) {
        if(c == '(' || c == '{' || c == '[') st.push(c);
        else {
            if(st.empty()) { cout << "No"; return 0; }
            st.pop();
        }
    }
    cout << (st.empty() ? "Yes" : "No");
    return 0;
}
