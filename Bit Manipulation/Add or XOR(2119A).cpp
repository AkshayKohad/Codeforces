#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int a,b;
        cin>>a>>b;
        
        ll x,y;
        cin>>x>>y;
        
        if(a>b+1){
            cout<<"-1"<<endl;
            continue;
        }
        
        if(a>b && a%2==0){
            cout<<"-1"<<endl;
            continue;
        }else if(a%2==1 && a==b+1){
            cout<<y<<endl;
            continue;
        }
        
        ll diff = b-a;
        ll val = diff/2;
        ll rem = diff%2;
        
        ll ans =  val*x + val*min(x,y);
        
        if(rem){
            if(a%2)ans += x;
            else ans += min(x,y);
        }
        
        cout<<ans<<endl;
    
    }
}
