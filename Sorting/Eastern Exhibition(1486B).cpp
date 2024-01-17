#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        vector<ll>x(n);
        vector<ll>y(n);
        
        for(ll i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        
        
    
    
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    
    if(n%2==0)
    {
        ll res_x = x[n/2] - x[n/2-1] + 1;
        ll res_y = y[n/2] - y[n/2-1] + 1;
        
        cout<<res_x*res_y<<endl;
    }
    else{
         cout<<1<<endl;
    }
    
  }
}
