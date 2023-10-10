#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll days,ll xi,ll yi,ll xf,ll yf,vector<pair<ll,ll>>&coordinate_shift,ll n)
{
    ll divi = days/n;
    ll mod = days%n;
    
    ll x_res = xi + divi*(coordinate_shift[n-1].first);
    ll y_res = yi + divi*(coordinate_shift[n-1].second);
    
    
    if(mod>0)
    {
        x_res +=  coordinate_shift[mod-1].first;
        y_res +=   coordinate_shift[mod-1].second;
    
    }
    //cout<<days<<" "<<x_res<<" "<<y_res<<endl;
    ll x_rem = abs(x_res-xf);
    ll y_rem = abs(y_res-yf);
    
    if(x_rem + y_rem > days)
    return false;
    
    return true;
}

int main()
{
    ll x1,y1;
    ll x2,y2;
    
    cin>>x1>>y1;
    cin>>x2>>y2;
    
    ll n;
    cin>>n;
    
    string s;
    cin>>s;
    
    pair<ll,ll>cur = {0,0};
    vector<pair<ll,ll>>coordinate_shift;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            cur.second += 1;
            
        }
        else if(s[i]=='D')
        {
            cur.second -= 1;
        }
        else if(s[i]=='L')
        {
            cur.first -= 1;
        }
        else{
            cur.first += 1;
        }
        coordinate_shift.push_back(cur);
    }
    ll l=0;
    ll r=n*(abs(x2-x1) + abs(y2-y1));
    
    ll ans=-1;
    while(l<=r)
    {
        ll mid = (l+r)/2;
      //  cout<<mid<<endl;
        if(check(mid,x1,y1,x2,y2,coordinate_shift, n))
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
