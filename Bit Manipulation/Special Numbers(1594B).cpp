#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define mod 1000000007

ll power(ll a,ll n)
{
    if(n==0) return 1%mod;
    
    if(n==1) return a%mod;
    
    if(n%2==1)
    {
        ll val = power(a,(n-1)/2);
        
        val =  val*val%mod;
        
        return val*a%mod;
    }
    
    //for even
        ll val = power(a,n/2);
        
        return val*val%mod;
    
}

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        
        ll result = 0;
        
        ll count=0;
        while(k!=0)
        {
            if(k & 1)
            {
                result  = (result + power(n,count))%mod;
            }
            
            k = k>>1;
            count++;
            
        }
        
        cout<<result<<endl;
    }
}
