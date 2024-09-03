#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll count_range(string &a,string &b,vector<ll>&mark)
{
    ll result = 0;
    ll ans=0;
    
    for(ll i=0;i<a.length();i++)
    {
       if(a[i]==b[i] || mark[a[i]-'a'])
       ans++;
       
       else{
           ll temp = (ans)*(ans+1);
           temp = temp/2;
           
           result += temp; 
           
           ans=0;
       }
    }
    
    ll temp = (ans)*(ans+1);
    temp = temp/2;
           
    result += temp; 
    
    
    return result;
}

void solve(ll i,ll cnt,vector<ll>&mark,ll &n,ll &k,ll &ans,string &a,string &b,string &val)
{
    if(cnt>k) return;
    
    if(i==val.size())
    {
        ans = max(ans,count_range(a,b,mark));
        return;
    }
    
    solve(i+1,cnt,mark,n,k,ans,a,b,val);
    
    mark[val[i]-'a']=1;
    solve(i+1,cnt+1,mark,n,k,ans,a,b,val);
    mark[val[i]-'a']=0;
    
    return;
    
}

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        
        string a,b;
        cin>>a>>b;
        
        
        set<char>st;
        
        for(ll i=0;i<n;i++)
        {
            st.insert(a[i]);
        }
        
        string val;
        
        for(auto w:st)
        {
            val.push_back(w);
        }
        
        ll sz = val.size();
        
        k = min(k,sz);
        
        vector<ll>mark(26,0);
        ll ans = 0;
        solve(0,0,mark,n,k,ans,a,b,val);
        cout<<ans<<"\n";
    }
    
}
