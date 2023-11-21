#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll a,b,k;
    cin>>a>>b>>k;
    vector<ll>arr(n);
    vector<ll>res(n);
    
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        
        ll val = arr[i];
        
        ll rem = val%(a+b);
        
        if(rem==0)
        {
            rem = a+b;
        }
        rem = rem-a;
        
        if(rem<=0)
        {
            res[i] = 0;
        }
        else{
            ll divi = rem/a;
            
            if(rem%a==0)
            {
                res[i] = divi;
            }
            else{
                res[i] = divi+1;
            }
        }
       // cout<<res[i]<<" ";
    }
   // cout<<endl;
    
    sort(res.begin(),res.end());
    
    
    ll answer = 0;
    
    for(ll i=0;i<n;i++)
    {
        if(res[i]<=k)
        {
            answer++;
            k = k-res[i];
        }
        else{
            break;
        }
    }
    
    cout<<answer<<endl;
    

}
