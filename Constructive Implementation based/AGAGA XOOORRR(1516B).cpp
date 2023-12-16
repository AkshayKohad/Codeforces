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
     
     for(ll i=0;i<n;i++)
     cin>>a[i];
     
     vector<ll>prefix_xor(n);
     prefix_xor[0] = a[0];
     
     for(ll i=1;i<n;i++)
     {
         prefix_xor[i] = prefix_xor[i-1]^a[i];
     }
     
     ll res_flag = 0;
     for(ll i=0;i<n;i++)
     {
         
         ll val = 0;
         
         ll flag = 0;
         for(ll j=i+1;j<n;j++)
         {
             val = val^a[j];
             
             if(val==prefix_xor[i])
             {
                 flag=1;
                 val=0;
             }
         }
         
         if(val==0 && flag==1)
         {
             res_flag=1;
             break;
         }
     }
     
     if(res_flag==1)
     {
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
 }
}
