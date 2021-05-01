#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        //printf("Is %d factor of %d?\n",i,n);
        if(n%i==0){
            //printf("Entered");
            return false;
        }
    }
    return true;
}


void solve(){
    int d,p,q;
    cin>>d;
    //find p, smallest prime >= 1+d
    p = 1+d;
    while(true){
        //printf("Trying %d\n",p);
        if(checkPrime(p))
            break;
        p++;
    }
    //find q, smallest prime >= p+d
    q = p+d;
    while(true){
        //printf("Trying %d\n",q);
        if(checkPrime(q))
            break;
        q++;
    }
    //answer is pq
    printf("%d",p*q);
    printf("\n");
}



int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}