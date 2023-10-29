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
     {
         cin>>a[i];
     }
     
     string s;
     cin>>s;
     
     vector<ll>prefix_1(n);
     vector<ll>prefix_0(n);
     vector<ll>prefix(n);
     
     if(s[0]=='1')
     {
         prefix_1[0] = a[0];
         prefix_0[0] = 0;
     }
     else{
         prefix_0[0] = a[0];
         prefix_1[0] = 0;
     }
     prefix[0] = a[0];
     for(ll i=1;i<n;i++)
     {
       if(s[i]=='1')
       {
         prefix_1[i] = prefix_1[i-1]^a[i];
         prefix_0[i] = prefix_0[i-1];
       }
       else{
         prefix_0[i] = prefix_0[i-1]^a[i];
         prefix_1[i] = prefix_1[i-1];
       }
       
       prefix[i] = prefix[i-1]^a[i];
     }
     
     ll res_1 = prefix_1[n-1];
     ll res_0 = prefix_0[n-1];
     
     ll q;
     cin>>q;
     
     while(q--)
     {
         ll ch;
         cin>>ch;
         
         if(ch==1)
         {
             ll l,r;
             cin>>l>>r;
             
            ll ans = prefix[r-1]^prefix[l-1]^a[l-1];
             
             res_0 = res_0^ans;
             res_1 = res_1^ans;
         }
         else{
             ll bit;
             cin>>bit;
             
             if(bit==0)
             {
                 cout<<res_0<<" ";
             }
             else{
                 cout<<res_1<<" ";
             }
         }
     }
     
     cout<<endl;
 }
 
}
