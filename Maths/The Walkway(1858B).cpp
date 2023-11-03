#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,d;
        cin>>n>>m>>d;
        
        vector<ll>s(m);
        
        for(ll i=0;i<m;i++)
        {
            cin>>s[i];
        }
        
        sort(s.begin(),s.end());
        
        vector<ll>cookie_seller;
        
        
            cookie_seller.push_back(1-d);
        
        
        for(ll i=0;i<m;i++)
        {
            cookie_seller.push_back(s[i]);
        }
        
        cookie_seller.push_back(n+1);
        
        ll count = cookie_seller.size()-2;
        
        for(ll i=0;i<cookie_seller.size()-1;i++)
        {
            ll diff = cookie_seller[i+1]-cookie_seller[i]-1;
            
           
            
            count += diff/d;
            
        }
        
        //cout<<count<<endl;
        
        unordered_map<ll,ll>mp;
        
        for(ll i=1;i<cookie_seller.size()-1;i++)
        {
            ll diff_right = cookie_seller[i+1]-cookie_seller[i]-1;
            ll diff_left = cookie_seller[i]-cookie_seller[i-1]-1;
            ll diff_overall = cookie_seller[i+1]-cookie_seller[i-1]-1;
            
           
            ll cnt_right = diff_right/d;
            ll cnt_left = diff_left/d;
            ll cnt_overall = diff_overall/d;
            
            mp[count-cnt_right-cnt_left-1+cnt_overall]++;
        }
        
        ll res = LONG_MAX;
        ll res_cnt = 0;
        for(auto k:mp)
        {
            if(res>k.first)
            {
                res = k.first;
                res_cnt = k.second;
            }
        }
        
        cout<<res<<" "<<res_cnt<<endl;
    }
}
