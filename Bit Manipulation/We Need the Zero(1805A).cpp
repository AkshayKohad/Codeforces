#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int xor_val = 0;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            xor_val ^=val; 
        }
        
        if(n%2==0 && xor_val!=0){
            cout<<-1<<endl;
        }else{
            cout<<xor_val<<endl;
        }
    }
    
}
