#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    
    for(ll i=0;i<n;i++)
    cin>>a[i];
    
    sort(a.begin(),a.end());
    
    ll count = 0;
    
    if(n%2==0)
    {
        count=n/2;
    }
    else{
        count = n/2 + 1;
    }
    
    ll i=n-1;
    
    ll res = 0;
    
    while(i>=0 && count--)
    {
        res += a[i];
        i--;
    }
    
    ll res2 = 0;
    
    while(i>=0)
    {
        res2 += a[i];
        i--;
    }
    
    ll answer = res*res + res2*res2;
    
    cout<<answer;
}
