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
        
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        ll zero=0;
        
        ll i=0;
        ll cur=-1;
        while(i<n)
        {
            if(cur==-1)
            cur=a[i];
            
            cur = cur&a[i];
            i++;
            
            
            if(cur==0)
            {
                
                zero++;
                cur=-1;
            }
            
            
        }
        
        ll result = 0;
        if(cur!=-1)
        {
            if(zero>0)
            {
                cout<<zero<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            cout<<zero<<endl;
        }
        
        
    }
}
