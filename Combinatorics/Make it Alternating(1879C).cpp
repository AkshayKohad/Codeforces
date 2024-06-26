#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 998244353


ll factorial(ll num)
{
    ll ans = 1;
    
    for(ll i=1;i<=num;i++)
    {
        ans = (ans*i)%mod;
    }
    
    return ans;
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        int n = s.length();
        
        int i=0;
        
        ll res = 1;
        
        vector<ll>seq_len;
        
        while(i<n)
        {
           ll cnt=0;
           int j=i;
           
           while(j<n && s[i]==s[j])
           {
               j++;
               cnt++;
           }
           
           
           i=j;
          
           seq_len.push_back(cnt);
           
        }
        
        
        ll min_removal = n-seq_len.size();
        
        
        
        if(min_removal==0)
        {
            cout<<min_removal<<" ";
            cout<<"1\n";
            continue;
        }
        
        
        for(ll i=0;i<seq_len.size();i++)
        {
            res = (res*seq_len[i])%mod;
        }
        
        res = (res*factorial(min_removal))%mod;
        
        cout<<min_removal<<" "<<res<<"\n";
        
    }
}
