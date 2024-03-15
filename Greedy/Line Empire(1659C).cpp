#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,a,b;
        
        cin>>n>>a>>b;
        
        vector<ll>points(n);
        
        ll prefix_points = 0;
        for(ll i=0;i<n;i++)
        {
            cin>>points[i];
            prefix_points += points[i];
        }
        
        ll res = b*prefix_points;
        ll cnt = n;
        for(ll i=0;i<n;i++)
        {
            ll ans = points[i]*(a+b) + b*(prefix_points-cnt*points[i]);
            
            res = min(res,ans);
            
            cnt--;
            prefix_points = prefix_points-points[i];
        }
        
        cout<<res<<endl;    
    }
}
