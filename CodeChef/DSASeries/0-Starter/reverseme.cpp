#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int nums[t];
    for(int i = 0; i < t; i++)
        cin>>nums[i];
    for(int i = t-1; i >= 0; i--)
        cout<<nums[i]<<" ";
    return 0;
}