#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    
    vector<vector<char>>board(n,vector<char>(n));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>board[i][j];
        }
    }
    
    int flag = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
           
            int cnt = 0;
            
            // up
            if(i-1>=0){
                if(board[i-1][j]=='o')cnt++;
            }
            
            //down
            if(i+1<n){
                if(board[i+1][j]=='o')cnt++;
            }
            
            //right
            if(j+1<n){
                if(board[i][j+1]=='o')cnt++;
            }
            
            //left
            if(j-1>=0){
                if(board[i][j-1]=='o')cnt++;
            }
            
            if(cnt%2==1){
                flag=0;
                break;
            }
            
        }
        if(flag==0)break;
    }
    
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
