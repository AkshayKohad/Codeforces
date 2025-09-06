#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    
    while(t--){
        ll n;
        cin>>n;
        
        
        vector<ll>result;
        
        ll val = 1;
        
        
        for(int i=1;i<=17;i++){
            val = val*10;
            
            if(n%(val+1)==0)result.push_back(n/(val+1));
        }
        
        cout<<result.size()<<endl;
        sort(result.begin(),result.end());
        for(auto res : result){
            cout<<res<<" ";
        }
        if(result.size())
        cout<<endl;
    }
}
