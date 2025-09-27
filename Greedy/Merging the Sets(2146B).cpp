#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        vector<int>cnt_occurences(m+1,0);
        vector<vector<int>>sets;
        
        for(int i=0;i<n;i++){
            int sz;
            cin>>sz;
            vector<int>a;
            for(int j=0;j<sz;j++){
                int val;
                cin>>val;
                a.push_back(val);
                cnt_occurences[val]++;
            }
            
            sets.push_back(a);
        }
        
        int flag = 1;
        
        for(int i=1;i<=m;i++){
            if(cnt_occurences[i]==0){
                flag=0;
                break;
            }
        }
        
        if(!flag){
            cout<<"NO"<<endl;
            continue;
        }
        
        
        int compulsory_set = 0;
        int not_compulsory_set = 0;
        
        for(int i=0;i<n;i++){
            int is_compulsory = 0;
            int is_not_compulsory = 1;
            for(int j=0;j<sets[i].size();j++){
                if(cnt_occurences[sets[i][j]]==1){
                    is_compulsory=1;
                    is_not_compulsory=0;
                    break;
                }
            }
            
            compulsory_set += is_compulsory;
            not_compulsory_set += is_not_compulsory; 
        }
        
        
        
        if(not_compulsory_set >= 2){
            cout<<"YES"<<endl;
            continue;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
