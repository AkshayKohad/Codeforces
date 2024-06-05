#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


bool check(ll val,vector<ll>&a,ll k)
{
    ll sum = 0;
    
    for(ll i=0;i<a.size();i++)
    {
        if(a[i]>=val)
        return true;
        
        sum += val-a[i];
        
        if(sum>k)
        return false;
    }
    
    return true;
    
}
int main()
{
  IOS 
  
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,k;
  
    cin>>n>>k;
  
    vector<ll>a(n);
  
    for(ll i=0;i<n;i++)
    {
     cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    
    ll l=0;
    ll r = a[n-1]+k;
    
    ll ans = -1;
    
    while(l<=r)
    {
      ll mid = (l+r)/2;
      
      if(check(mid,a,k))
      {
          l = mid+1;
          ans = mid;
      }
      else{
          r = mid-1;
      }
    }
    
    ll mini = ans;
    ll index = 0;
    
    for(int i=0;i<n;i++)
    {
         
        if(a[i]>mini)
        break;
        
        ll diff = mini-a[i];
        k = k-diff;
        index++;
    }   
     ans = mini + (n-1)*(mini-1);
     ans = ans + (n-index);
     ans += k;
     cout<<ans<<endl;
  }
return 0;
}
