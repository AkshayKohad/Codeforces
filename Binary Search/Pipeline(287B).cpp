#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll splitter_num,ll n,ll k)
{
    int res  = 1 - splitter_num;
    
    n = n-res;
    
    
    
    if(splitter_num>0)
    {
       ll val = k*(k+1)/2;
       
       ll w = k-splitter_num;
       
       ll val2 = w*(w+1)/2;
       
       ll res_val = val-val2;
       
       n = n-res_val;
    }
    
    if(n<=0)
    return true;
    
    return false;
}

int main()
{
    ll n,k;
    cin>>n>>k;
    
    ll l=0;
    
    ll r = k-1;
    
    ll ans = -1;
    
    vector<ll>prefix_sum;
    
    ll sum = 0;
   
    
    
    
    //cout<<sum<<endl;
    while(l<=r)
    {
        int mid = (l+r)/2;
        
        if (check(mid,n,k))
        {
            ans = mid;
            r = mid-1;
        }
        
        else{
            l = mid+1;
        }
    }
    
    cout<<ans;
}
