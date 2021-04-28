#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    cout<<(char)toupper(s.at(0));
    cout<<s.substr(1,s.length());
    return 0;
}