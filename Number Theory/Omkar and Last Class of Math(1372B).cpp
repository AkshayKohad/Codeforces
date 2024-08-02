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
    
      if(n%2==0)
      {
        cout<<n/2<<" "<<n/2<<"\n";
        continue;
      }
    
    ll largest = 1;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            largest = max(largest,i);
            
            largest = max(largest,n/i);
        }
        
    }
    
       cout<<largest<<" "<<n-largest<<"\n";
   }
}
