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
       
       vector<ll>a(n);
       vector<ll>b(n);
       
       
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
           cin>>b[i];
       }
     
       vector<ll>c(n);
       
       for(ll i=0;i<n;i++)
       {
           c[i] = a[i]*b[i];
       }
       
       ll res = 1;
       ll i=0;
       
       ll gcd_c = 0;
       ll lcm_b = 1;
    //   ll gcd_b = 0;
     //  ll mul_b = 1;
       
       while(i<n)
       {
          
        gcd_c = __gcd(gcd_c,c[i]);
        
     
        
        lcm_b = lcm_b*b[i]/__gcd(lcm_b,b[i]);
        
        
        
        if(gcd_c%lcm_b!=0)
        {
            res++;
            
            lcm_b = b[i];
            gcd_c = c[i];
           
        }
        
            i++;
          
       }
       
       cout<<res<<"\n";
   }
   
}
