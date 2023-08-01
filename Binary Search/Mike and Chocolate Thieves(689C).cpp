#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll cap)
{
    ll res = 0;
    for(ll i=2;i*i*i<=cap;i++)
    {
        res += cap/(i*i*i); 
    }
    
    return res;
}

int main() {

ll m;
cin>>m;

ll l=1;
ll r=1e18;
ll ans = -1;

while(l<=r)
{
    ll mid = (l+r)/2;
    
    ll cnt_ways = solve(mid);
    
    if(cnt_ways==m) ans = mid;
    
    if(cnt_ways<m) l=mid+1;
    
    else if(cnt_ways>=m) r=mid-1;
}

cout<<ans;
	return 0;
}
