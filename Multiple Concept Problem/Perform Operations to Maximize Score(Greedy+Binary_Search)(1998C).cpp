#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll mid,vector<pair<ll,ll>>a,ll k,ll n)
{
    ll cnt = 0;
    
    vector<ll>values_1;
    
    for(ll i=0;i<n-1;i++)
    {
        if(mid<=a[i].first)
        {
            cnt++;
        }
        else if(a[i].second==1)
        {
            values_1.push_back(a[i].first);
        }
    }
    
    reverse(values_1.begin(),values_1.end());
    
    ll m = values_1.size();
    
    for(ll i=0;i<m;i++)
    {
        ll diff = mid-values_1[i];
        
        if(diff<=k)
        {
            cnt++;
            k=k-diff;
        }
        else
        break;
    }
    
    if(cnt>=(n+1)/2)
    return true;
    
    return false;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<pair<ll,ll>> a(n);
        

        for (ll i = 0; i < n; i++) {
            cin >> a[i].first;
        }

        
        for (ll i = 0; i < n; i++) {
            cin >> a[i].second;
        }    
        sort(a.begin(),a.end());
        
        ll  ans = 0;
        
        // case1: Increment max
        
        for(ll i=0;i<n;i++)
        {
            if(a[i].second==1)
            {
                ll median = 0;
                
                if(i<n/2)
                {
                    median = a[n/2].first;
                }
                else{
                    median = a[(n-2)/2].first;
                }
                
                ans = max(ans, median+k+a[i].first);
            }
        }
        
        //case2 Maximize median
        
        ll l=0;
        ll r = a[n-1].first+k;
        ll ans_median = -1;
        
        while(l<=r)
        {
            ll mid = (l+r)/2;
            
            if(check(mid,a,k,n))
            {
                ans_median = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        
        ans = max(ans,a[n-1].first+ans_median);
        
        cout<<ans<<"\n";
        
    }

    return 0;
}
