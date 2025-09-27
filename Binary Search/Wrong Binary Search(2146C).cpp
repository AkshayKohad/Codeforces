#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        stack<int>st;
        vector<int>res(n);
        int flag = 1;
        int i=0;
        int j=0;
        
        while(j<n){
            
            if(s[j]=='0'){
                st.push(j+1);
                j++;
            }else{
                if(st.size()==1){
                    flag = 0;
                    break;
                }else{
                    while(i<j){
                        res[i] = st.top();
                        st.pop();
                        i++;
                    }
                    res[j] = j+1;
                }
                j++;
                i=j;
            }
        }
        
        if(st.size()==1){
            flag = 0;
        }
        
        if(flag){
            while(i<j){
                res[i] = st.top();
                st.pop();
                i++;
            }
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<res[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
