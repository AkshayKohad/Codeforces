#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    int n = s.length();
    
    string mat = "hello";
    int pos = 0;
    
    int flag = 0;
    
    for(int i=0;i<n;i++){
        if(mat[pos]==s[i]){
            pos++;
        }
        if(pos==mat.length()){
            flag = 1;
            break;
        }
    }
    
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
