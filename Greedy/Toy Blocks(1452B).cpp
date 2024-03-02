#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
         vector<ll>a(n);
        
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        if(n<=2)
        {
            cout<<"0"<<endl;
            continue;
        }
        
       
        
        sort(a.begin(),a.end());
        
        ll val = a[n-1];
        ll initial = a[0];
        
        ll res_cnt = 0;
        
        for(ll i=1;i<n;i++)
        {
            res_cnt += val-a[i];
        }
        
        if(res_cnt>=initial)
        cout<<max(0ll,res_cnt-initial)<<endl;
        
        else
        {
            ll res = initial-res_cnt;
            
            res = res%(n-1);
            
            if(res!=0)
            {
              cout<<n-1-res<<endl;   
            }
            else{
                cout<<"0"<<endl;
            }
        }
        
        
    }
}
