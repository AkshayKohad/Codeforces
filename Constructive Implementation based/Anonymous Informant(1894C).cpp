#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 
 ll t;
 cin>>t;
 
 while(t--)
 {
   ll n,k;
   cin>>n>>k;
   
   vector<ll>b(n);
   
   for(ll i=0;i<n;i++)
   cin>>b[i];
   
   set<ll>st;
   
   ll j=n-1;
   
   ll flag=1;
   while(k--)
   {
     if(b[j]>n)
     {
         cout<<"No\n";
         flag=0;
         break;
     }
     
     if(st.find(j)!=st.end())
     {
        
         break;
     }
     
     st.insert(j);
     
     j = j-b[j];
     
     j = (j+n)%n;
   }
   
   if(flag)
   {
        cout<<"Yes\n";
   }
 }
 
}
