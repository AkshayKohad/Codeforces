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
        
        sort(a.begin(),a.end());
        
        if(a[0]==a[n-1]){
            cout<<"-1"<<endl;
            continue;
        }
        
        int index = n-1;
        int j = n-2;
        
        while(a[j]==a[index]){
            j--;
        }
        
        vector<int>res1;
        vector<int>res2;
        
        for(int i=0;i<=j;i++){
            res1.push_back(a[i]);
        }
        for(int i=j+1;i<n;i++){
            res2.push_back(a[i]);
        }
        
        cout<<res1.size()<<" "<<res2.size()<<endl;
        for(int i=0;i<res1.size();i++){
            cout<<res1[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<res2.size();i++){
            cout<<res2[i]<<" ";
        }
        cout<<endl;
    }
}
