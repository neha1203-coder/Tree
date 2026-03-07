#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s, word;
    getline(cin,s);
    stringstream ss(s);
    int count=0;
    while(ss>>word) count++;
    cout<<count;
    return 0;
}
