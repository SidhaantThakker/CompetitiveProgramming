#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()>10){
            cout<<s.at(0)<<(s.size()-2)<<s.at(s.size()-1)<<'\n';
        }
        else{
            cout<<s<<'\n';
        }
    }
    return 0;
}