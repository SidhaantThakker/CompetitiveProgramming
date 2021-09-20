#include <bits/stdc++.h>
using namespace std;

void solve(){
    long int n,x;
    cin>>n;
    vector<long int> even;
    vector<long int> odd;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0){
            even.push_back(x);
        } else {
            odd.push_back(x);
        }
    }
    if((even.size() == 0) || (odd.size() == 0)){
        cout<<"-1"<<endl;
        return;
    }
    for(auto i = even.begin(); i!= even.end(); ++i){
        cout<<*i<<' ';
    }
    for(auto i = odd.begin(); i!= odd.end(); ++i){
        cout<<*i<<' ';
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }   
    return 0;
}