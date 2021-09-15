#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    string out = "YES";
    if(a+b<=c)
        out = "NO";
    if(a+c<=b)
        out = "NO";
    if(c+b<=a)
        out = "NO";
    cout<<out;
    return 0;
}