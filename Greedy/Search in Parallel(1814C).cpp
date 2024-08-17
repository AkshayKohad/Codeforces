#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,s1,s2;
        cin>>n>>s1>>s2;
        
        vector<pair<ll,ll>>a(n);
        
        ll sum = 0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i].first;
            a[i].second=i+1;
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
      
        vector<ll>f;
        vector<ll>s;
        
        for(ll i=0;i<n;i++)
        {
            ll cost1 = s1*(f.size()+1);
            ll cost2 = s2*(s.size()+1);
            
           // cout<<a[i].second<<"\n";
            
            if(cost1>cost2)
            {
                s.push_back(a[i].second);
            }
            else{
                f.push_back(a[i].second);
            }
        }
        
        cout<<f.size()<<" ";
        
        for(ll i=0;i<f.size();i++)
        cout<<f[i]<<" ";
        
        cout<<"\n";
        cout<<s.size()<<" ";
        
        for(ll i=0;i<s.size();i++)
        cout<<s[i]<<" ";
        
        cout<<"\n";
        
    }
}
