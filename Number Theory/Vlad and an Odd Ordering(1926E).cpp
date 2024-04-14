#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        
        ll cnt_odd = n/2 + n%2;
        
        if(cnt_odd>=k)
        {
            cout<<2*k-1<<endl;
            continue;
        }
        
        ll val = 2;
        
        k = k-cnt_odd;
        
        while(k>0)
        {
            ll divi = n/val;
            
            ll cnt = (divi+1)/2;
            
            if(cnt>=k)
            {
                cout<<val*(2*k-1)<<endl;
                break;
            }
            else{
                val = val*2;
                k = k-cnt;
            }
        }
    }
}
