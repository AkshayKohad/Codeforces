#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
    ll n,m,k;
    
    cin>>n>>m>>k;
    
    vector<ll>a(n);
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    vector<ll>res_diff;
    
    for(ll i=0;i<n-1;i++)
    {
        res_diff.push_back(a[i+1]-a[i]);
    }
    
    sort(res_diff.rbegin(),res_diff.rend());
    
    ll answer = a[n-1]-a[0] + 1;
    
    for(ll i=1;i<k;i++)
    {
        // since it is only taping the point gap not range so +1 is that point to be included
        answer = answer - res_diff[i-1] + 1;
    }
    
    cout<<answer<<endl;
    
    
}
