#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
     ll n,a,b;
     cin>>n>>a>>b;
     
     if(n==1) 
     {
         cout<<"Yes"<<endl;
         continue;
     }
     
     ll flag = 0;
     ll l=0;
     ll r = 64;
     ll mid_a = 0;
     while(mid_a<=64)
     {
    //   ll mid_a = (l+r)/2;
       
       ll val = pow(a,mid_a);
       
       
       ll low = 0;
       ll high = n/b;
       
       while(low<=high)
       {
           ll mid_b = (low+high)/2;
           
           ll val2 = b*mid_b;
           
           if(val+val2==n)
           {
               flag=1;
               break;
           }
           else if(val+val2>n)
           {
               high = mid_b-1;
           }
           else{
               low = mid_b+1;
           }
       }
       
       if(flag==1)
       break;
       
       mid_a++;
     }
     
     if(flag==1)
     cout<<"Yes"<<endl;
     
     else
     cout<<"No"<<endl;
 }
}
