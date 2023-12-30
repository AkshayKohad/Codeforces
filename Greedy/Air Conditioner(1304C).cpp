#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll q;
    cin>>q;
    
    while(q--)
    {
        ll n,m;
        cin>>n>>m;
        
        ll prev = 0;
        
        ll maxi = m;
        ll mini = m;
        
        bool flag = true;
        
        for(ll i=0;i<n;i++)
        {
            ll t,l,h;
            
            cin>>t>>l>>h;
            
            maxi += t-prev;
            mini -= t-prev;
            
            if(maxi<l || mini>h)
            {
                flag = false;
            }
            
            maxi = min(maxi,h);
            mini = max(mini,l);
            
            prev = t;
        }
        
        
        if(flag)
        {
            cout<<"YES"<<endl;
            
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
