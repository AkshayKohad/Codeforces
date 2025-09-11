#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int>a(n);
        vector<int>b(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        
        int result = 0;
        
        for(int i=0;i<n;i++){
            int diff = a[i]-b[i];
            
            result += max(diff,0);
        }
        
        result++;
        
        cout<<result<<endl;
    }
}
