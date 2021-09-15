#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool b1 = !(n%5), b2 = !(n%11);
    if(b1 && b2)
    cout<<"BOTH";
    else if(b1 || b2)
    cout<<"ONE";
    else
    cout<<"NONE";
    return 0;
}