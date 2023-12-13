#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    
    ll l,r,x;
    cin>>l>>r>>x;
    
    vector<ll>c(n);
    
    for(ll i=0;i<n;i++)
    {
        cin>>c[i];
    }
    
    sort(c.begin(),c.end());
    
    ll val = pow(2,n)-1;
    
   
    ll result = 0;
    
    for(ll i=val;i>=0;i--)
    {
      //  cout<<i<<endl;
        ll sum = 0;
        ll mini = c[n-1]+1;
        ll maxi = 0;
        ll set_bit_cnt = 0;
        for(ll j=n-1;j>=0;j--)
        {
            ll bit = (i>>j) & 1;
            
            if(bit==1)
            {
               sum += c[j];
               mini = min(mini,c[j]);
               maxi = max(maxi,c[j]);
               set_bit_cnt++;
            }
        }
        
        //cout<<set_bit_cnt<<" "<<sum<<" "<<maxi<<" "<<mini<<endl;
        if(set_bit_cnt>=2)
        {
            if(sum>=l && sum<=r)
            {
                if(maxi-mini>=x)
                {
                    result++;
                }
            }
        }
    }
    
    cout<<result;
}
