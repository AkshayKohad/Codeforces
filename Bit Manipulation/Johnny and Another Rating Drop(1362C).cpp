#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll n)
{
    if(n==1)
    return 1;
    
    return n + solve(n/2);
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        cout<<solve(n)<<endl;
    }
    
}
