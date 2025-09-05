#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    
    while(t--){
        ll a,b,k;
        
        cin>>a>>b>>k;
        
        ll gcd_val = __gcd(a,b);
        
        ll a_new = a/gcd_val;
        ll b_new = b/gcd_val;
        
        ll maxi_val = max(a_new,b_new);
        
        if(maxi_val<=k){
            cout<<"1"<<endl;
        }else{
            cout<<"2"<<endl;
        }
        
    }
}
