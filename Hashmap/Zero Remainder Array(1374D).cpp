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
       
       vector<ll>a(n);
       
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
       }
       
       map<ll,ll>mp;
       
       for(ll i=0;i<n;i++)
       {
           if(a[i]%k!=0)
           mp[a[i]%k]++;
       }
       
       ll result = 0;
       
       for(auto w:mp)
       {
           ll val = w.first;
           ll val_freq = w.second;
           
           ll value = k-val;
           
           ll res = (val_freq-1)*k + value;
           
           result = max(result,res);
           
       }
       
       if(result!=0)
       result++;
       
       cout<<result<<endl;
   }
}
