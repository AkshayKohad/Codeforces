#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    IOS
    
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    
    ll cnt_1 = 0;
    
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
      
      if(a[i]==1)
      cnt_1++;
      
    }
    
    if(cnt_1>0)
    {
        cout<<n-cnt_1<<"\n";
        return 0;
    }
    
    ll min_length = n;
    
    ll flag=0;
    
    for(ll i=0;i<n;i++)
    {
        ll gcd = a[i];
        
        for(ll j=i+1;j<n;j++)
        {
            gcd = __gcd(gcd,a[j]);
            
            if(gcd==1)
            {
                flag=1;
                min_length = min(min_length,j-i);
                break;
            }
        }
    }
    
    if(flag==1)
    cout<<min_length + n-1<<"\n";
    
    else
    cout<<"-1\n";
    
    
    
}
