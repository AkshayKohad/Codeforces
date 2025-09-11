#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
    
        vector<int>a(n);
        int result = 0;
    
        for(int i=0;i<n;i++){
            cin>>a[i];
            result += a[i] + (a[i]==0);
        }
    
        cout<<result<<endl;
    }
    
}
