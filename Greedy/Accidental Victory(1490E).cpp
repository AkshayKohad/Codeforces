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
        
        vector<pair<ll,ll>>b;
        for(ll i=0;i<n;i++)
        {
          cin>>a[i];
          b.push_back({a[i],i});
        }        
        
        sort(b.begin(),b.end());
        
        ll prefix_sum = 0;
        
        ll i=0;
        ll j=0;
        
        while(j<n-1)
        {
            prefix_sum += b[j].first;
            
            if(prefix_sum>=b[j+1].first)
            {
                j++;
            }
            else{
                j++;
                i=j;
            }
        }
        
        vector<ll>result;
        
        for(ll k=i;k<=j;k++)
        {
            result.push_back(b[k].second);
        }
        
        sort(result.begin(),result.end());
        
        
        cout<<result.size()<<endl;
        
        
        for(ll k=0;k<result.size();k++)
        {
            cout<<result[k]+1<<" ";
        }
        cout<<endl;
        
        
    }
}
