#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    
    
    while(t--){
        
        ll n,a,b;
        cin>>n>>a>>b;
        
        ll maxi = max(a,b);
        
         ll diff = n-maxi;
            
        if(diff%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        
        if(b>=a){
            cout<<"YES"<<endl;
        }else{
            
            if(a%2 == b%2){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
            
        }
        
    }
    
    return 0;
}
