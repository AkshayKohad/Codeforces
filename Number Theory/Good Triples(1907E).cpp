#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        string n;
        cin>>n;
        
        ll res = 0;
        
        vector<ll>ans;
        for(ll i=0;i<n.length();i++)
        {
            ll x = n[i]-'0';
            
            ll tot_cnt=0;
            
            for(ll j=0;j<=x;j++)
            {
                for(ll k=0;k<=x-j;k++)
                {
                    tot_cnt++;
                }
            }
            
            ans.push_back(tot_cnt);
        }
        
        res = ans[0];
        
        for(ll i=1;i<ans.size();i++)
        {
            res = res*ans[i];
        }
        
        
        cout<<res<<"\n";
    }
}
