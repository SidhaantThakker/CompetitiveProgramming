#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    int n,k,a,rem,quo,count=0, flag1=0, flag2=0;
    vector<int> pow;
    unordered_set<int> past;
    cin>>n>>k;
    //cout<<"N "<<n<<'\n';
    //cout<<"K "<<n<<'\n';
    fi(n){
        cin>>a;
        pow.push_back(a);
        past.insert(a);
    }
    sort(pow.begin(), pow.end(),  greater<int>());
    for(auto i = pow.begin(); i!= pow.end(); i++){
        quo = k / *i;
        rem = k % *i;
        count+=quo;
        k-= quo*(*i);
        //cout<<"*i "<<*i<<'\n';
        //cout<<"Q "<<quo<<'\n';
        //cout<<"R "<<rem<<'\n';
        //cout<<"C "<<count<<'\n';
        if(past.find(rem) != past.end()){
            flag1 = 1;
            count++;
            rem = 0;
            cout<<count<<" ";
            break;
        }
        if(rem == 0){
            flag1 = 1;
            cout<<count<<" ";
            break;
        }
    }
    sort(pow.begin(), pow.end());
    for(auto i = pow.begin(); i!= pow.end(); i++){
        quo = k / *i;
        rem = k % *i;
        count+=quo;
        k-= quo*(*i);
        //cout<<"*i "<<*i<<'\n';
        //cout<<"Q "<<quo<<'\n';
        //cout<<"R "<<rem<<'\n';
        //cout<<"C "<<count<<'\n';
        if(past.find(rem) != past.end()){
            count++;
            rem = 0;
            cout<<count<<'\n';
            return;
        }
        if(rem == 0){
            cout<<count<<'\n';
            return;
        }
    }
}   

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}