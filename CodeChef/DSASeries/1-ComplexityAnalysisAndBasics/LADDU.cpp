#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    int n,num,score=0;
    cin>>n;
    string origin, activity;
    cin>>origin;
    fi(n){
        cin>>activity;
        if(activity=="CONTEST_WON"){
            cin>>num;
            score+= 300 + max(20-num,0);
        } else if (activity=="BUG_FOUND"){
            cin>>num;
            score+=num;
        } else if (activity=="TOP_CONTRIBUTOR"){
            score+=300;
        } else if (activity=="CONTEST_HOSTED"){
            score+=50;
        }
    }
    if(origin=="INDIAN"){
        cout<<score/200<<endl;
    } else if(origin=="NON_INDIAN"){
        cout<<score/400<<endl;
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