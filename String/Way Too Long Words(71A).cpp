#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        int n = s.length();
        
        if(n<=10){
            cout<<s<<endl;
        }else{
            string res;
            res.push_back(s[0]);
            res += to_string(n-2);
            res.push_back(s[n-1]);
            cout<<res<<endl;
        }
    }
}
