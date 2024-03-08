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
   
   for(ll i=0;i<n;i++)
   {
       cin>>a[i];
   }
   
   ll res_digits = 0;
   
   vector<ll>res_zero;
   
   for(ll i=0;i<n;i++)
   {
       ll cnt_zero = 0;
       ll cnt_digits = 0;
       
       ll val = a[i];
       
       while(val%10==0)
       {
         cnt_zero++;
         cnt_digits++;
         val = val/10;
       }
       
       while(val!=0)
       {
         cnt_digits++;
         val = val/10;
       }
       
       if(cnt_zero>0)
       {
           res_zero.push_back(cnt_zero);
       }
       
       res_digits += cnt_digits;

   }
   
   sort(res_zero.begin(),res_zero.end(),greater<ll>());
   
   ll req_digits = m+1;
   
   for(ll i=0;i<res_zero.size();i=i+2)
   {
       res_digits -= res_zero[i];
   }
   
   if(req_digits <= res_digits)
   {
       cout<<"Sasha"<<endl;
   }
   else{
       cout<<"Anna"<<endl;
   }
   
 }
 
 return 0;
 
}
