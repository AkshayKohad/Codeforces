#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        
        vector<ll>a(n);
        
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        
        sort(a.begin(),a.end());
        
        ll res = 0;
        
        if(n%2==1){
            res += a[0];
            
            for(ll i=1;i<n;i+=2){
                res += a[i+1];
            }
        }else{
            for(ll i=0;i<n;i+=2){
                res += a[i+1];
            }
        }
        
        cout<<res<<endl;
    }
}
