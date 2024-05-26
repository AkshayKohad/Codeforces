#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long

int main()
{
    IOS
    
    ll n,k1,k2;
    cin>>n>>k1>>k2;
    
    vector<ll>a(n);
    vector<ll>b(n);
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
    }
    
    priority_queue<ll>pq;
    
    for(ll i=0;i<n;i++)
    {
        pq.push(abs(a[i]-b[i]));
    }
    
    ll flag = 0;
    
    while(k1>0)
    {
        ll val = pq.top();
        pq.pop();
       
        if(val==0)
        {
            flag=1;
            break;
        }
        
        val--;
        pq.push(val);
        k1--;
    }
    
    if(flag==1)
    {
        ll total = k1+k2;
        
        if(total%2==0)
        {
            cout<<"0\n";
        }
        else{
            cout<<"1\n";
        }
        
        return 0;
    }
    
    while(k2>0)
    {
        ll val = pq.top();
        pq.pop();
        if(val==0)
        {
            flag=1;
            break;
        }
        
        val--;
        pq.push(val);
        k2--;
    }
    
    if(flag==1)
    {
        ll total = k1+k2;
        
        if(total%2==0)
        {
            cout<<"0\n";
        }
        else{
            cout<<"1\n";
        }
        
        return 0;
    }
    
    ll ans = 0;
    
    while(pq.size()>0)
    {
        ll val = pq.top();
        
        //cout<<val<<endl;
        ans += val*val;
        
        pq.pop();
    }
    
    cout<<ans<<"\n";
    
    return 0;
    
}
