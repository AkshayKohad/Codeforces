#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool mycmp(vector<ll>f,vector<ll>s)
{
    if(f[0]==s[0])
    {
        if(f[1]==s[1])
        return f[2]<s[2];
        
        return f[1]<s[1];
    }
    
    return f[0]>s[0];
}

int main()
{
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    
    
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
    }
    
    
    vector<ll>count_3(n);
    
    vector<ll>count_2(n);
    
    vector<vector<ll>>res_count(n);
    
    for(ll i=0;i<n;i++)
    {
        ll val = a[i];
        
        ll cnt = 0;
        while(val%3==0)
        {
            cnt++;
            val = val/3;
        }
        
        count_3[i] = cnt;
        
        cnt = 0;
        
        while(val%2==0)
        {
            cnt++;
            val = val/2;
        }
        
        count_2[i] = cnt;
        
        res_count[i] = {count_3[i],count_2[i],i};
    }
    
    
    sort(res_count.begin(),res_count.end(),mycmp);
    
    for(ll i=0;i<n;i++)
    {
        ll index = res_count[i][2];
        
        cout<<a[index]<<" ";
    }
    
    
    
    
}
