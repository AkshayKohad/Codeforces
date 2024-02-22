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
     
     int cnt_power_of_10 = 0;
     
     for(ll i=0;i<n;i++)
     {
         cin>>a[i];
         
         if(a[i]%10==5)
         a[i]+=5;
         
         if(a[i]%10==0)
         {
             cnt_power_of_10++;
         }
         
     }
     
     sort(a.begin(),a.end());
     
     if(cnt_power_of_10>0 && cnt_power_of_10<n)
     {
         cout<<"NO"<<endl;
         continue;
     }
     
     if(cnt_power_of_10==n)
     {
       if(a[0]==a[n-1])
       {
         cout<<"YES"<<endl;
         continue;
       }
       else{
           cout<<"NO"<<endl;
           continue;
           
       }
       
     }
     
     for(ll i=0;i<n;i++)
     {
         while(a[i]%10!=2)
         {
             a[i] = a[i] + a[i]%10;
         }
         
     }
     
     sort(a.begin(),a.end());
     
     bool flag = true;
     
     for(int i=0;i<n-1;i++)
     {
         ll diff = a[i+1]-a[i];
         
         if(diff%20!=0)
         {
             cout<<"NO"<<endl;
             flag = false;
             break;
         }
     }
     
     
     if(flag==true)
     {
         cout<<"YES"<<endl;
     }
   
     
     
 }
}
