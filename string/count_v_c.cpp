#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int v=0,c=0;
    for(char ch:s) {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            v++;
        else
            c++;
    }
    cout<<"Vowels="<<v<<" Consonants="<<c;
    return 0;
}
