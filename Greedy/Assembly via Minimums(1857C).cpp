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
        
        ll m = n*(n-1)/2;
        
        
        vector<ll>b(m);
        
       
        
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
           
        }
        
        sort(b.begin(),b.end());
        ll index = 0;
        for(ll i=0;i<n-1;i++)
        {
            
            cout<<b[index]<<" ";
            index = index + n-1-i;
            
        }
        
        cout<<b[m-1];
        cout<<endl;
    }
}
