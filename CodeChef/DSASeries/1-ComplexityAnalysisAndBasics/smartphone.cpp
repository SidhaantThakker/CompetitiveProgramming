#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    long int revenue = 0, max = 0;
    cin>>n;
    long int budget[n];
    for(long int i=0;i<n;i++){
        cin>>budget[i];
    }
    sort(budget,budget+n);
    for(long int i=0;i<n;i++){
        revenue = (n-i)*budget[i];
        if(revenue>=max){
            max = revenue;
        }
    }
    cout<<max;
    return 0;
}