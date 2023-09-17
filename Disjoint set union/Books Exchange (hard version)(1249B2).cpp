#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll find(ll par,vector<ll>&parent)
{
    if(parent[par]==-1)
    {
        return par;
    }
    
    return parent[par] = find(parent[par],parent);
}
void unite(ll par1,ll par2,vector<ll>&parent,vector<ll>&rank)
{
    if(rank[par1]>=rank[par2])
    {
        parent[par2] = par1;
        rank[par1] += rank[par2];
    }
    
    else{
         parent[par1] = par2;
        rank[par2] += rank[par1];
    }
}
int main() {
	
	ll q;
	cin>>q;
	while(q--)
	{
	    ll n;
	    cin>>n;
	    
	    vector<ll>a(n+1);
	    
	    vector<ll>parent(n+1,-1);
	    vector<ll>rank(n+1,1);
	    
	    for(int i=1;i<=n;i++)
	    cin>>a[i];
	    
	    for(int i=1;i<=n;i++)
	    {
	        ll cur_par = find(a[i],parent);
	        ll next_par = find(a[a[i]],parent);
	        
	        if(cur_par==next_par && cur_par!=-1)
	        {
	            continue;
	        }
	        
	        unite(cur_par,next_par,parent,rank);
	    }
	    
	    for(int i=1;i<=n;i++)
	    {
	        ll cur_par = find(a[i],parent);
	        
	        cout<<rank[cur_par]<<" ";
	    }
	    
	    cout<<endl;
	}
	
	return 0;
}
