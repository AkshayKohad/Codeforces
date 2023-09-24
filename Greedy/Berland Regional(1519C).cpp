#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool mycmp(pair<ll,ll>f,pair<ll,ll>s)
{
    if(f.first == s.first)return f.second<s.second;
    
    return f.first>s.first;
    
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        vector<ll>u(n);
        
        for(ll i=0;i<n;i++)
        cin>>u[i];
        
        vector<ll>s(n);
        
        for(ll i=0;i<n;i++)
        {
            cin>>s[i];
        }
        
        vector<pair<ll,ll>>answer;
        for(ll i=0;i<n;i++)
        {
            ll university = u[i]-1;
            ll skill = s[i];
           answer.push_back({skill,university});
           
        }
        
        
        sort(answer.begin(),answer.end(),mycmp);
        
        unordered_map<ll,vector<ll>>res;
        
        for(ll i=0;i<n;i++)
        {
            ll prev = 0;
            
            ll university = answer[i].second;
            ll skill = answer[i].first;
            
            if(res[university].size()!=0)
            prev = res[university].back();
            
            res[university].push_back(skill+prev);
        }
        
        
        vector<ll>result(n,0);
        
        for(auto k:res)
        {
            ll i = k.first;
            if(res[i].size()==0)continue;
            
           // ll res_sum = 0;
            ll size = res[i].size();
            
            for(ll j=1;j<=size;j++)
            {
                if(j<=size)
                {
                    
                if(size%j==0)
                {
                    //res_sum+=res[i][size-1];
                    result[j-1]+=res[i][size-1];
                }
                else{
                    ll k = size%j;
                   // res_sum+=res[i][size-1-k];
                   result[j-1] += res[i][size-1-k];
                }
                
                }
                
                
            }
            
            
        }
        for(ll i=0;i<result.size();i++)
        cout<<result[i]<<" ";
        
        cout<<endl;
    }
}
