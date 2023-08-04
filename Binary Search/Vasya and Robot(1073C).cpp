Denote d=|x|+|y​|. If d>n, then the answer is -1, since the robot will not have the time to reach (x,y) cell in n steps. Also, if d and n
 have different parity, then the answer is also -1, as in one move the robot changes the parity of the sum of its coordinates.

In all other cases, the answer exists. Let's use binary search to solve this problem. Consider all segments of length len. For a fixed length of the segment len, 
let's iterate over the position of the beginning of the segment l. At the same time, we will maintain the cell that the robot will stop at if it execute all commands,
except commands with indices l,l+1,…,l+len−1. We denote this position as (x0,y0). We also calculate the distances from the cell (x0,y0)to the cell (x,y)— the value
d0=|x−x0|+|y​​−y0|. If there is at least one position of the beginning of the segment for which d0≤len, then we can change the segment of length len
so that the robot comes to the (x,y) cell, otherwise it can't.





#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define N = 200005

bool validate(ll x,ll y,ll n)
{
    x = abs(x);
    y = abs(y);
    
   
    if(x+y > n || ((x+y-n)%2 != 0))
    return false;
    
    return true;
}

bool check(ll limit,vector<ll>&posx,vector<ll>&posy,ll n,ll x,ll y)
{
    bool valid = false;
    for(ll i=limit;i<=n;i++)
    {
        ll x0 = posx[i-limit] + posx[n]-posx[i];
        ll y0 = posy[i-limit] + posy[n]-posy[i];
        
        x0 = x0-x;
        y0 = y0-y;
        
        valid = valid | validate(x0,y0,limit);
    }
    
    return valid;
}

int main()
{
    ll n;
    cin>>n;
    
    // string s;
    // cin>>s;
    
    vector<ll>posx(n+1,0);
    vector<ll>posy(n+1,0);
    
    for(int i=1;i<=n;i++)
    {
        posx[i] = posx[i-1];
        posy[i] = posy[i-1];
        
        char ch;
        cin>>ch;
        
        if(ch == 'L')
        {
            posx[i]--;
        }
        else if(ch == 'R')
        {
            posx[i]++;
        }
        else if(ch == 'U')
        {
            posy[i]++;
        }
        else if(ch == 'D')
        {
            posy[i]--;
        }
    }
    
    ll x;
    ll y;
    
    cin>>x>>y;
   // cout<<x<<" "<<y<<endl;
    
    if(!validate(x,y,n))
    {
        cout<<"-1";
        return 0;
    }
    
    ll l = 0;
    ll r = n+1;
    ll ans = -1;
    
    
    while(l<=r)
    {
     ll mid = (l+r)/2;
     
     if(check(mid,posx,posy,n,x,y))
     {
         ans = mid;
         r = mid-1;
     }
     else{
         l = mid+1;
     }
    }
    
    cout<<ans;
}
