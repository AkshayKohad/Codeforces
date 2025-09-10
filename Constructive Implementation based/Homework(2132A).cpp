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
        
        int m;
        cin>>m;
        
        string t;
        string r;
        cin>>t>>r;
        
        stack<char>st;
        queue<char>q;
        
        for(int i=0;i<m;i++){
            if(r[i]=='V'){
                st.push(t[i]);
            }else{
                q.push(t[i]);
            }
        }
        
        string start;
        
        while(st.empty()==false){
            start.push_back(st.top());
            st.pop();
        } 

        
        string end;
        
        while(q.empty()==false){
            end.push_back(q.front());
            q.pop();
        }
        
        string result = start + s + end;
        
        cout<<result<<endl;
    }
}
