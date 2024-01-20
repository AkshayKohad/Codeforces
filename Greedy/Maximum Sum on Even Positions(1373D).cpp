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
       
       ll sum = 0;
       
       for(ll i=0;i<n;i++)
       {
           if(i%2==0)
           {
               sum += a[i];
           }
       }
       
       ll i=1;
       
       ll maxi = 0;
       ll cur_sum = 0;
       while(i<n)
       {
          cur_sum += a[i]-a[i-1];
          
          if(cur_sum<0)
          cur_sum=0;
          
          maxi = max(cur_sum,maxi);
          
          i+=2;
       }
       i=1;
       cur_sum=0;
       while(i+1<n)
       {
          cur_sum += a[i]-a[i+1];
          
          if(cur_sum<0)
          cur_sum=0;
          
          maxi = max(cur_sum,maxi);
          
          i+=2;
       }
       
       cout<<sum+maxi<<endl;
       
   }
}
