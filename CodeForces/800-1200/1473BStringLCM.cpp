#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s,t;
    cin>>s>>t;
    string a=s,b=t;
    int l1=s.length(),l2=t.length();

    int LCM=0;

    for(int i=1;i<=l1*l2;i++){
        if(i%l1==0 && i%l2==0){
            LCM=i;
            break;
        }
    }
    //cout<<"LCM found - "<<LCM<<'\n';
    

    for(int i=1;i<=(LCM/l1)-1;i++){
        //cout<<"LCM/l1 - "<<LCM/l1<<'\n';
        s=s+a;
    }

    //cout<<"New s - "<<s<<'\n';

    for(int i=1;i<=(LCM/l2)-1;i++){
        //cout<<"LCM/l2 - "<<LCM/l2<<'\n';
        t=t+b;
    }


    //cout<<"New t - "<<t<<'\n';

    if(s==t){
        cout<<s<<'\n';
    }
    else{
        cout<<"-1"<<'\n';
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}