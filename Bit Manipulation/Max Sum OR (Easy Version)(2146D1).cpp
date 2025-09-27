#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int l,r;
        cin>>l>>r;
        
        int right_most_set = 31;
        
        while(right_most_set>=0){
            int bit = (r>>right_most_set)&1;
            if(bit){
                break;
            }
            right_most_set--;
        }
        
        int val = pow(2,right_most_set+1)-1;
        //cout<<val<<endl;
        vector<int>ans(r+1,0);
        unordered_set<int>st;
        
        long long sum = 0;
        int i=r;
        while(i>=0){
            int new_val = val-i;
            
            if(st.find(new_val) == st.end() && new_val<=r){
                sum += new_val | i;
                st.insert(new_val);
                ans[i] = new_val;
                i--;
            }else{
                val = val - pow(2,right_most_set);
                right_most_set--;
            }
        }
        
        cout<<sum<<endl;
        for(int i=0;i<=r;i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
}
