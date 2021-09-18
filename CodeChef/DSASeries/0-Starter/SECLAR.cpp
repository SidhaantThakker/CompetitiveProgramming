#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int sl = (a>b)?((b>c)?b:((a>c)?c:a)):((a>c)?a:((b>c)?c:b));
    cout<< sl;
    return 0; 
}