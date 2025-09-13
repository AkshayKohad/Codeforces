#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        int n = s.length();
        
        queue<char>q;
        int cnt_t = 0;
        
        for(int i=0;i<n;i++){
         if(s[i]=='T')cnt_t++;
         else q.push(s[i]);
        }
        
        string res;
        
        while(cnt_t>0){
            res.push_back('T');
            cnt_t--;
        }
        
        while(q.empty() == false){
            res.push_back(q.front());
            q.pop();
        }
        
        cout<<res<<endl;
        
    }
}
