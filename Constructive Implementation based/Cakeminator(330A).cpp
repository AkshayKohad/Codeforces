#include <bits/stdc++.h>
using namespace std;


int main() {
    int r,c;
    cin>>r>>c;
    
    vector<vector<char>>mat(r,vector<char>(c));
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    
    vector<int>row(r,0);
    vector<int>col(c,0);
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]=='S'){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    
    int cnt_row = 0;   
    for(int i=0;i<r;i++){
        if(row[i]==0)cnt_row++;
    }
    int cnt_col = 0;
    for(int i=0;i<c;i++){
        if(col[i]==0)cnt_col++;
    }
    
    
    int cnt_res = cnt_row*c + cnt_col*r - cnt_row*cnt_col;
    
    
    
    cout<<cnt_res<<endl;
    return 0;
}
