#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,q;
        cin>>a>>b>>q;
        
        ll res = a*b;
        
        vector<ll>prefix(res,0);
        
        for(ll i=1;i<res;i++)
        {
            int res1 = (i%a)%b;
            int res2 = (i%b)%a;
            
            if(res1!=res2)
            {
                prefix[i] = prefix[i-1]+1;
            }
            
            else{
                prefix[i] = prefix[i-1];
            }
        }
        
        while(q--)
        {
            ll l,r;
            
            cin>>l>>r;
            
            ll ans1 = (r/res)*prefix[res-1] + prefix[r%res];
            
            ll ans2 = ((l-1)/res)*prefix[res-1] + prefix[(l-1)%res];
            
            cout<<ans1-ans2<<" ";
        }
        cout<<endl;
    }
}
