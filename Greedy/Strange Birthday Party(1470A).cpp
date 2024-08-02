#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        
        vector<ll>friends(n);
        vector<ll>presents(m);
        
        for(ll i=0;i<n;i++)
        {
            cin>>friends[i];
        }
        
        for(ll i=0;i<m;i++)
        {
            cin>>presents[i];
        }
        
        sort(friends.begin(),friends.end());
        
        ll j=n-1;
        ll i=0;
        
        ll answer=0;
        
        while(j>=0)
        {
            if(friends[j]-1>=i)
            {
                answer += presents[i];
                i++;
                j--;
            }
            else{
                answer += presents[friends[j]-1];
                j--;
            }
        }
        
        cout<<answer<<"\n";
    }
}
