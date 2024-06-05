#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main()
{
 ll t;
 cin>>t;
 
 while(t--)
 {
     ll l,r,m;
     cin>>l>>r>>m;
     
     ll maxi = r-l;
     
     ll flag=0;
     
     for(ll i=l;i<=r;i++)
     {
         ll a = i;
         ll b,c;
         ll rem_sub = m%a;
         ll rem_add = a-rem_sub;
         ll rem_mini;
         
        //  if(a==2)
        //  {
        //      cout<<m-rem_sub<<endl;
        //  }
         
         if(m-rem_sub>0)
          rem_mini = min(rem_sub,rem_add);
         
         else 
         rem_mini = rem_add;
         
         
         
         if(rem_mini<=maxi)
         {
             cout<<a<<" ";
             
             if(rem_mini==rem_sub && m-rem_sub>0)
             {
                  c = l;
                  b = l+rem_mini;
             }
             else{
                  c = l+rem_mini;
                  b = l;
             }
             
             cout<<b<<" "<<c<<"\n";
             flag=1;
             break;
         }
     }
 }
}
