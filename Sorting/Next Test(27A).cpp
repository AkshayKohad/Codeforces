#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int>a(3002,0);
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        
        a[val] = 1;
    }
    
    for(int i=1;i<=3001;i++){
        if(a[i]==0){
            cout<<i<<endl;
            break;
        }
    }
    
    return 0;
}
