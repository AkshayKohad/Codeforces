#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool power_of_2(ll n)
{
    while(n>1)
    {
        if(n%2!=0)
        return false;
        
        n=n/2;
    }
    return true;
}

bool isPrime(ll val)
{
    if(val<=1)
    return false;
    
    if(val<=3)
    return true;
    
    if(val%2==0 || val%3==0)
    return false;
    
    for(ll i=5;i*i<=val;i=i+6)
    {
         if (val % i == 0 || val % (i + 2) == 0)
            return false;
    }
    
    return true;
}

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
        if(n==1)
        {
            cout<<"FastestFinger"<<endl;
            
        }
       else if(n==2)
        {
            cout<<"Ashishgup"<<endl;
           
        }
        else if(n%2==1)
        {
             cout<<"Ashishgup"<<endl;
           
        }
        else
        {
            
            if(power_of_2(n))
            {
                cout<<"FastestFinger"<<endl;
            }
            else{
            ll res = n/2;
            
            if(isPrime(res))
            {
                cout<<"FastestFinger"<<endl;
            }
            else{
                 cout<<"Ashishgup"<<endl;
            
            }
            }
        }
    }
}
