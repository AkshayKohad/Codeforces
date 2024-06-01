#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"

const int MOD = 1e9 + 7;

ll pow(ll a, ll b, ll m)
{
	ll ans=1;
	while(b)
	{
		if(b&1)
			ans=(ans*a)%m;
		b/=2;
		a=(a*a)%m;
	}
	return ans;
}

void dfs(ll nd, ll &sz,vector<ll>&visited,vector<ll>adj[])
{
    if(visited[nd])return;
    
    sz++;
    visited[nd]=1;
    
    for(auto u:adj[nd])
    {
        dfs(u,sz,visited,adj);
    }
}

int main()
{
    IOS 
  
    ll n,k;
    cin>>n>>k;
  
    vector<ll>adj[n+1];
  
  
    
    ll ans = pow(n, k, MOD);
      
    vector<ll>visited(n+1);
   
    for(ll i=0;i<n-1;i++)
    {   
      ll u, v, x;
	  cin>>u>>v>>x;
	  if(x == 0)
		adj[u].push_back(v),adj[v].push_back(u);  
    }
    
    for(ll i=1;i<=n;i++)
    {
        if(visited[i])continue;
        
        ll sz = 0;
        dfs(i,sz,visited,adj);
        
        ans -= pow(sz, k, MOD);
		ans += MOD;
		ans %= MOD;
    }
  
  cout<<ans<<endl;
  
}
