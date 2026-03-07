#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(char c:s){
        if(c=='(') st.push(c);
        else {
            if(st.empty()){ cout<<"Not Balanced"; return 0; }
            st.pop();
        }
    }
    cout<<(st.empty()?"Balanced":"Not Balanced");
    return 0;
}
