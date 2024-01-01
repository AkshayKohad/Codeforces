#include <bits/stdc++.h>
using namespace std;


#define ll long long

bool check(ll days,ll n,ll g,ll b)
{
    ll repair = 0;
    
    ll tot = g+b;
    repair += (days/tot)*g;
    
    ll rem = days%tot;
    
    if(rem>=g)
    repair += g;
    
    else{
        repair += rem;
    }
    // while(days>0)
    // {
    //     if(days-g>=0)
    //     {
    //         repair += g;
    //         days = days-g;
    //     }
    //     else{
    //         repair += days;
    //         days = 0;
    //     }
        
    //     if(days-b>=0)
    //     {
    //         days = days-b;
    //     }
    //     else{
    //         days = 0;
    //     }
    // }
    
    if(repair*2 >= n)
    return true;
    
    return false;
    
    
}


int main()
{
   ll t;
   cin>>t;
   
   while(t--)
   {
       ll n,g,b;
       
       cin>>n>>g>>b;
       
       ll l=n;
       
       
       ll r = n*(g+b);
       
       ll ans = -1;
       
       while(l<=r)
       {
           ll mid = (l+r)/2;
           
           if(check(mid,n,g,b))
           {
               ans = mid;
               r = mid-1;
           }
           else{
               l = mid+1;
           }
       }
       
       cout<<ans<<endl;
   }
}
