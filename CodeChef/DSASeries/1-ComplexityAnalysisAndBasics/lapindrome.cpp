#include <bits/stdc++.h>
using namespace std;


int freq(string s, char ch){
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s.at(i)==ch)
            c++;
    }
    return c;
}

bool solve(){
    string s,s1,s2;
    cin>>s;
    int l = s.length();
    if(l%2==0){
        s1 = s.substr(0,l/2);
        s2 = s.substr(l/2,l/2);
    } else {
        s1 = s.substr(0,l/2);
        s2 = s.substr(l/2+1,l/2);
    }
    for(int i = 97; i <= 122; i++){
        if(freq(s1,char(i))!=freq(s2,char(i))){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        if(solve()){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}