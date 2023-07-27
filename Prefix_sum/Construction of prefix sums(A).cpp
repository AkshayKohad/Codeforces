#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    vector<ll>prefix_sum(n+1,0);
    
    partial_sum(a.begin(),a.end(),prefix_sum.begin()+1);
    
    for(int i=0;i<prefix_sum.size();i++)
    {
        cout<<prefix_sum[i]<<" ";
    }
    
}
