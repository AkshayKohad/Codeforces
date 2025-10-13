#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int first_R = -1;
    int last_R = -1;
    int first_L = -1;
    int last_L = -1;
    
    
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            if(first_R == -1 && last_R == -1){
                first_R = i+1;
                last_R = i+1;
            }else{
                last_R = i+1;
            }
        }else if(s[i]=='L'){
            if(first_L == -1 && last_L == -1){
                first_L = i+1;
                last_L = i+1;
            }else{
                last_L = i+1;
            }
        }
    }
    
    if(first_R==-1){
        cout<<last_L<<" "<<first_L-1<<endl;
    }else if(first_L==-1){
        cout<<first_R<<" "<<last_R+1<<endl;
    }else{
        cout<<first_R<<" "<<last_R<<endl;
    }
}
