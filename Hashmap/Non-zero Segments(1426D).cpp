#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
   ll n;
   cin>>n;
   
   vector<ll>a(n);
   
   for(ll i=0;i<n;i++)
   {
       cin>>a[i];
   }
   
   unordered_map<ll,ll>mp;
   
   mp[0]=-1;
   
   ll recent_index = -1;
   ll sum = 0;
   
   ll res = 0;
   for(ll i=0;i<n;i++)
   {
       sum += a[i];
       
       if(mp.find(sum)!=mp.end())
       {
           ll index = mp[sum];
           
           if(index+1 >= recent_index)
           {
               recent_index = i;
               res++;
           }
       }
       
       mp[sum] = i;
   }
   
   cout<<res<<endl;
}
