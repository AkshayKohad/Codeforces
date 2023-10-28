#include <bits/stdc++.h>
using namespace std;


#define ll long long


// ll find_sqrt(ll val)
// {
//     ll l=0;
//     ll r = sqrt(val)+1;
//     ll ans = -1;
    
//     while(l<=r)
//     {
//         ll mid = (l+r)/2;
        
//         if(mid*mid == val)
//         return mid;
        
//         else if(mid*mid > val)
//         r = mid-1;
        
//         else
//         l = mid+1;
//     }
    
//     return ans;
    
// }

int main() {


 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 
ll t;
cin>>t;


while(t--)
{
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    
    map<ll,ll>mp;
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    
    
    ll q;
    cin>>q;
    
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        
        ll val = x*x - 4*y;
        ll res_val = sqrt(val);
        
        
        if(res_val*res_val!=val)
        {
            cout<<"0 ";
            continue;
        }
        
        ll num1 = (x+res_val)/2;
        ll num2 = (x-res_val)/2;
        
        if(num1==num2)
        {
            ll num_res = mp[num1];
            
            cout<<(num_res)*(num_res-1)/2<<" ";
        }
        else{
            ll num_res1 = mp[num1];
            ll num_res2 = mp[num2];
            
            cout<<(num_res1)*(num_res2)<<" ";
        }
    }
    
    cout<<endl;
}
    
}
