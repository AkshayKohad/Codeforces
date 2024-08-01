#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool mycmp(vector<ll>a,vector<ll>b)
{
    if(a[0]==b[0])
    {
        return a[1]>b[1];
    }
    return a[0]<b[0];
}

bool check(ll mid,vector<vector<ll>>res)
{
    for(ll i=0;i<res.size();i++)
    {
        if(mid<res[i][0])
        {
            return  false;
        }
        mid += res[i][1];
    }
    
    return true;
}
int main()
{
 ll t;
 cin>>t;
 
 while(t--)
 {
     ll n;
     cin>>n;
     
     
     vector<vector<ll>>res;
     ll sum = 0;
     
     for(ll i=0;i<n;i++)
     {
         ll sz;
         cin>>sz;
         
         ll initial = 0;
         
         
         for(ll j=0;j<sz;j++)
         {
             ll val;
             cin>>val;
             
             if(initial+j<=val)
             {
                 ll diff = val - (initial+j);
                 initial += diff+1;
             }
             
             
         }
       
         
         res.push_back({initial,sz});
       
         
     }
     
     sort(res.begin(),res.end(),mycmp);
     
  
     
     ll l=0;
     ll r=res[res.size()-1][0]+1;
     
     
     ll ans=-1;
     
     while(l<=r)
     {
         ll mid = (l+r)/2;
         
         if(check(mid,res))
         {
             ans=mid;
             r=mid-1;
         }
         else{
             l=mid+1;
         }
     }
    
     
     cout<<ans;
     cout<<"\n";
 }
 
 
}
