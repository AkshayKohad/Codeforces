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
       
       ll sum = 0;
       
       for(ll i=0;i<n;i++)
       {
       cin>>a[i];
       sum += a[i];
       }
       
       sort(a.begin(),a.end());
       
       
       if(sum%2==1)
       {
           ll i=0;
           ll divi = sum/2;
           ll res_sum = 0;
           while(i<n)
           {
                 if(res_sum+a[i]>divi+1)
                 break;
                 
                 res_sum = res_sum+a[i];
                 
                 i++;
           }
           
           ll result  = divi+1 + (n-i);
           
           cout<<result<<endl;
           
           
       }
       else{
            ll i=0;
           ll divi = sum/2;
           ll res_sum = 0;
           while(i<n)
           {
                 if(res_sum+a[i]>divi)
                 break;
                 
                 res_sum = res_sum+a[i];
                 
                 i++;
           }
           
           ll result  = divi + (n-i);
           
           cout<<result<<endl;
       }
       
    }
}
