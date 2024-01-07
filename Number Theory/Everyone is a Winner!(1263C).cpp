#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
        vector<ll>a;
        vector<ll>b;
        
       
        set<ll>s;
        
        for(ll i=0;i*i<=n;i++)
        s.insert(i);
        
        for(ll i=1;i*i<=n;i++)
        s.insert(n/i);
        
        
        cout<<s.size()<<endl;
        
        for(auto k:s)
        {
            cout<<k<<" ";
        }
        cout<<endl;
        
    }
    
    
}
