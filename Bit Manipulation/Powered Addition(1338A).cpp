#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll find_msb(ll val)
{
    for(ll i=63;i>=0;i--)
    {
        ll bit = (val>>i) & 1;
        
        if(bit==1)
        {
           return i;    
        }
        
    }
    
    
}

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
        vector<ll>a(n);
        
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        ll maxi = a[0];
        
        ll req_time = 0;
        
        for(ll i=0;i<n;i++)
        {
            if(maxi>a[i])
            {
                ll res = find_msb(maxi-a[i]);
                
                req_time = max(req_time,res+1);
            }
            else{
                maxi = a[i];
            }
        }
        
        cout<<req_time<<endl;
    }
}
