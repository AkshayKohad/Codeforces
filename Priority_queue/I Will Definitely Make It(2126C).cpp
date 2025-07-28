#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    
    
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        k--;
        
        int val = a[k];
        
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int i=0;i<n;i++){
            if(val<a[i]){
                pq.push(a[i]);
            }
        }
        
        int level = 1;
        
        if(val<level){
            cout<<"NO"<<endl;
            continue;
        }
        
        int flag = 1;
        
        while(pq.size()>0){
            int height = pq.top();
            pq.pop();
            
            int diff = height-val;
            
            int new_level = level + diff - 1;
            
            if(new_level > val){
                flag = 0;
                break;
            }
            
            level = level + diff;
            val = height;
        }
        
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
