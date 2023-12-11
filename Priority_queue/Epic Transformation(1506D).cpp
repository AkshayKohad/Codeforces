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
        
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        
        priority_queue<pair<ll,ll>>pq;
        
        for(auto k:mp)
        {
            pq.push({k.second,k.first});
        }
        
        while(pq.size()>1)
        {
            pair<ll,ll>a = pq.top();
            pq.pop();
            pair<ll,ll>b = pq.top();
            pq.pop();
            
          //  cout<<a.first<<" "<<b.first<<endl;
            a.first = a.first-1;
            b.first = b.first-1;
            
            if(a.first!=0)
            {
                pq.push(a);
            }
            if(b.first!=0)
            {
                pq.push(b);
            }
        }
        
        if(pq.size()==0)
        {
            cout<<0<<endl;
        }
        else{
            pair<ll,ll>res = pq.top();
            cout<<res.first<<endl;
        }
        
        
    }
}
