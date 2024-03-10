#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 ll t;
 cin>>t;
 
 while(t--)
 {
   ll n,m;
   cin>>n>>m;
   
   vector<ll>a(n);
   vector<ll>b(n);
   
   a[0] = m;
   
   for(ll i=1;i<n;i++)
   cin>>a[i];
   
   for(ll i=0;i<n;i++)
   cin>>b[i];
   
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   
   ll i=0;
   ll j=0;
   
   ll cnt_res = 0;
   
   while(i<n && j<n)
   {
       if(a[i]<b[j])
       {
           i++;
           j++;
       }
       else{
           j++;
           cnt_res++;
       }
   }
   
   cout<<cnt_res<<endl;
 }
 
}
