#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int val;
    cin>>val;
    int result = abs(val);
    
    for(int i=0;i<n-1;i++){
        int val;
        cin>>val;
        
        result = min(result,abs(val));
    }
    
    cout<<result<<endl;
}
