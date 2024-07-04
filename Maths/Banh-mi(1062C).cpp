// Way 1

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main()
{
    ll n, q;
    cin >> n >> q;
    
    string s;
    cin >> s;
    
    vector<ll> cnt_one(n + 1, 0);
    vector<ll> cnt_zero(n + 1, 0);
    vector<ll> power(n + 1, 0);
    
    power[0] = 1;
    
    for (ll i = 1; i <= n; i++)
    {
        if (s[i - 1] == '0')  // Adjusting indexing for string s
        {
            cnt_zero[i] = cnt_zero[i - 1] + 1;
            cnt_one[i] = cnt_one[i - 1];
        }
        else
        {
            cnt_one[i] = cnt_one[i - 1] + 1;
            cnt_zero[i] = cnt_zero[i - 1];
        }
        
        power[i] = (power[i - 1] * 2) % mod;
    }
    
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        
        ll range_cnt_one = cnt_one[r] - cnt_one[l - 1];
        ll range_cnt_zero = cnt_zero[r] - cnt_zero[l - 1];
        
        ll ans = (power[range_cnt_one] - 1 + mod) % mod; // Ensure non-negative result
        ans = (ans * power[range_cnt_zero]) % mod;
        
        cout << ans << "\n";
    }
    
    return 0;
}


// Way 2

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll power(ll a, ll n)
{
    if(n==0)
    return 1;
    
    if(n==1)
    return a;
    
    if(n%2==0)
    {
        ll res = power(a,n/2);
        
        return (res*res)%mod;
    }
    
        ll res = power(a,(n-1)/2);
        
        res = (res*res)%mod;
        
        return (res*a)%mod;
}

int main()
{
  ll n,q;
  cin>>n>>q;
  
  string s;
  cin>>s;
  
  
  vector<ll>cnt_one(n+1,0);
  vector<ll>cnt_zero(n+1,0);
  
  for(ll i=1;i<=n;i++)
  {
      
      
      if(s[i-1]=='0')
      {
          cnt_zero[i] = cnt_zero[i-1] + 1;
          cnt_one[i] = cnt_one[i-1];
      }
      
      else
      {
          cnt_one[i] = cnt_one[i-1] + 1;
          cnt_zero[i] = cnt_zero[i-1];
      }
  }
  
  while(q--)
  {
      ll l,r;
      cin>>l>>r;
      
      ll range_cnt_one = cnt_one[r]-cnt_one[l-1];
      ll range_cnt_zero = cnt_zero[r]-cnt_zero[l-1];
      
      ll ans = 0;
      
      ll power_cnt_one = power(2,range_cnt_one)-1;
      
      ll power_cnt_zero = power(2,range_cnt_zero)-1;
      
      ans  = ((power_cnt_one*power_cnt_zero)%mod + power_cnt_one)%mod;
      
      cout<<ans<<"\n";
      
  }
  
}
