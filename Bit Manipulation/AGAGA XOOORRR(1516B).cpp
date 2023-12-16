//prefix_xor is 0 that means there are more even number of set bits which makes xor as 0 so answer is yes
//if prefix_xor !=0 then we will run a loop and create segments if xor of the segment equal to prefix_xor. If we cannot create more than 1 segments equal to prefix_xor 
//then answer is no else yes



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
     
     ll prefix_xor = 0;
     
     for(ll i=0;i<n;i++)
     {
         prefix_xor = prefix_xor^a[i];
     }
     
     if(prefix_xor==0)
     {
         cout<<"YES"<<endl;
         continue;
     }
    ll val = 0;
         
    ll cnt = 0;
        
     for(ll i=0;i<n;i++)
     {
         
         val = val^a[i];
         
         if(prefix_xor==val)
         {
             val=0;
             cnt++;
         }
       
     }
     
     if(val==0 && cnt>1)
     {
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
 }
}
