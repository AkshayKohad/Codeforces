#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,m,k,x,y;
    cin>>n>>m>>k>>x>>y;
    
    ll val = k;
    
    vector<vector<ll>>classroom(n+1,vector<ll>(m+1,0));
    
    ll one_round;
    
    if(n==1)
    {
        one_round = m;
    }
    else
    {
        one_round = n*m + (n-2)*m;
    }
    
    ll divi = k/one_round;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            classroom[i][j] += divi;
            
            if(i!=1 && i!=n)
            {
                classroom[i][j] += divi;
            }
        }
    }
    
    k = k%one_round;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(k>0)
            {
                k--;
                classroom[i][j]++;
            }
        }
    }
    
    for (int i = n - 1; i > 1; --i) {
        for (int j = 1; j <= m; j++) {
            if (k>0) {
                --k;
                classroom[i][j]++;
            }
        }
    }
    
    ll maxi = 0;
    ll mini = val;
    
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            maxi = max(maxi,classroom[i][j]);
            
            mini = min(mini,classroom[i][j]);
        }
    }
    
    ll Sergei = classroom[x][y];
    
    cout<<maxi<<" "<<mini<<" "<<Sergei;
    
    return 0;
}
