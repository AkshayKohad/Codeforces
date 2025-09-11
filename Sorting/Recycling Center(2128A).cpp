#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    
    while(t--){
        ll n,c;
        cin>>n>>c;
        
        vector<ll>a(n);
        
        for(int i=0;i<n;i++)cin>>a[i];
        
        sort(a.begin(),a.end());
        
        ll multiplier = 1;
        ll res_cost = 0;
        
        for(int i=n-1;i>=0;i--){
            if(a[i]*multiplier <= c){
                multiplier*=2;
            }else{
                res_cost++;
            }
        }
        
        cout<<res_cost<<endl;
    }
}
