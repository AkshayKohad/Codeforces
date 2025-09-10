#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        vector<int>result(n,0);
        result[0]=1;
        result[n-1]=1;
        
        vector<int>small(n,0);
        vector<int>large(n,0);
        
        int mini = a[0];
        for(int i=1;i<n;i++){
            if(mini >= a[i]){
                small[i]=0;
            }else{
                small[i]=1;
            }
            
            mini = min(a[i],mini);
        }
        
        int maxi = a[n-1];
        
        for(int i=n-2;i>=0;i--){
            if(maxi <= a[i]){
                large[i]=0;
            }else{
                large[i]=1;
            }
            
            maxi = max(maxi,a[i]);
        }
        
        for(int i=1;i<n-1;i++){
            if(small[i]==1 && large[i]==1)
            result[i]=0;
            else result[i]=1;
        }
        
        for(int i=0;i<n;i++){
            cout<<result[i];
        }
        
        cout<<endl;
    }
}
