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
        
        priority_queue<ll>a;
        priority_queue<ll>b;
        
        for(ll i=0;i<n;i++)
        {
            ll val;
            cin>>val;
            
            a.push(val);
        }
        
        for(ll i=0;i<n;i++)
        {
            ll val;
            cin>>val;
            
            b.push(val);
        }
        
        ll res=0;
        
        while(a.empty()==false)
        {
            if(a.top()==b.top())
            {
                a.pop();
                b.pop();
                continue;
            }
            
            res++;
            
            if(a.top()>b.top())
            {
                ll val = a.top();
                
                a.pop();
                a.push(to_string(val).length());
            }
            else{
                ll val = b.top();
                
                b.pop();
                b.push(to_string(val).length());
            }
            
        }
  
        cout<<res<<endl;
    }
}
