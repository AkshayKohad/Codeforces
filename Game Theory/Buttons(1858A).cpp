#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        int first = c/2 + c%2 + a;
        int second = c/2 + b;
        
        if(first > second){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
}
