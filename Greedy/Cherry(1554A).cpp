#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
   
ll t;
cin>>t;

while(t--)
{
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    ll result = 0;
    
    for(int i=0;i<n;i++)
    {
        if(i-1>=0)
        {
            ll maxi = max(a[i],a[i-1]);
            ll mini = min(a[i],a[i-1]);
            
            result = max(result,maxi*mini);
        }
        
        if(i+1<n)
        {
            ll maxi = max(a[i],a[i+1]);
            ll mini = min(a[i],a[i+1]);
            
            result = max(result,maxi*mini);
        }
    }
    
    cout<<result<<endl;
}
	return 0;
}
