#include <bits/stdc++.h>
using namespace std;


#define ll long long


int main()
{
    ll n,k;
    cin>>n>>k;
    
    ll cnt = 0;
    
    
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ll res = n/i;
            
            if(res==i)
            {
             cnt++;
            }
            else
            cnt=cnt+2;
        }
    }
    
    //cout<<cnt<<endl;
    
    if(cnt<k)
    {
      cout<<-1;
      return 0;
    }
    
    //vector<ll>divisors(k);
    
    ll l=1;
    ll r=cnt;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ll res = n/i;
            
            if(res==i)
            {
             // divisors[l]=res;
             if(l==k)
             {
             cout<<res;
             break;
             }
              l++;
            }
            else
            {
                //divisors[l] = i;
                //divisors[r] = res;
                if(l==k)
                {
                     cout<<i;
                        break;
                }
                if(r==k)
                {
                     cout<<res;
                     break;
                }
                l++;
                r--;
            }
          
        }
    }
    
   // cout<<divisors[k-1]<<endl;
    
}
