#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,m;
    cin>>n>>m;
    
    ll min_mex = n;
    
    for(ll i=0;i<m;i++)
    {
        ll l,r;
        cin>>l>>r;
        
        min_mex = min(min_mex,r-l+1);
    }
    
    cout<<min_mex<<"\n";
    
    vector<ll>a(n);
    
    ll cnt = 0;
    
    for(ll i=0;i<n;i++)
    {
        a[i]=cnt;
        cnt++;
        if(min_mex==cnt)
        {
            cnt=0;
        }
    }
    
    for(ll i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
