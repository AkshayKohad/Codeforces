#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int>a(n);
        
        int is_k_present = 0; 
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == k){
                is_k_present = 1;
            }
        }
        
        is_k_present == 1 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        
        
    }
}
