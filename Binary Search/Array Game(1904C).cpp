#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        
        vector<ll>a(n);
        ll result = -1;
         
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            
            if(result==-1)
            result=a[i];
            
            else
            result = min(result,a[i]);
           
        }
        
        if(k>=3)
        {
            cout<<"0"<<endl;
            continue;
        }
      
        
        ll diff_result = -1;
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(diff_result==-1)
                diff_result = abs(a[i]-a[j]);
                
                else
                diff_result = min(diff_result,abs(a[i]-a[j]));
            }
        }
     
     
     
     
     if(k==1)
     {
         cout<<min(diff_result,result)<<endl;
         continue;
     }
     
     sort(a.begin(),a.end());
    ll res = min(diff_result,result);
     for (ll i = 0; i < n; i++)
     {
         for (ll j = 0; j < i; j++) {
            ll v = a[i] - a[j];
            ll p = lower_bound(begin(a), end(a), v) - begin(a);
            if (p < n) res = min(res, a[p] - v);
            if (p > 0) res = min(res, v - a[p - 1]);
        }
     }
       
     cout<<res<<endl;
     
    }
    
    return 0;
}
