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
        
        ll cnt=0;
        for(ll i=1;(i*i+1)/2<=n;i++)
        {
            ll a = i;
            ll val = a*a;
            ll c_rem = (val+1)%2;
            ll c = (val+1)/2;
            
            
            ll b = c-1;
            
            if(b==0 || c>n || c_rem!=0)
            continue;
            
            
            cnt++;
            
            
        }
        
        cout<<cnt<<endl;
    }
}
