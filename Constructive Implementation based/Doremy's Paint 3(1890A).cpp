#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int>a(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a.begin(),a.end());
        
        if(n<=2){
            cout<<"Yes"<<endl;
            continue;
        }
        
       
        if(mp.size()==1){
            cout<<"Yes"<<endl;
            continue;
        }else if(mp.size()>2){
            cout<<"No"<<endl;
        }else{
            if(mp[a[0]]==mp[a[n-1]] || mp[a[0]]==mp[a[n-1]]+1 || mp[a[0]]==mp[a[n-1]]-1){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            } 
        }
        
        
    }
}
