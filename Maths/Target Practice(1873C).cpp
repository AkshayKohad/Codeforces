#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector<vector<int>>mat_score(10,vector<int>(10,0));
    
    int left = 0;
    int right = 9;
    int top = 0;
    int bottom = 9;
    int score = 1;
    while(left<=right && top<=bottom){
        
        int i = top;
        int j = left;
        
        // top horizontal traversal
        while(j<=right){
            mat_score[i][j] = score;
            j++;
        }
        
        i = bottom;
        j = left;
        // bottom horizontal traversal
        while(j<=right){
            mat_score[i][j] = score;
            j++;
        }
        
        i = top;
        j = left;
        
        while(i<=bottom){
            mat_score[i][j] = score;
            i++;
        }
        
        i = top;
        j = right;
        
        while(i<=bottom){
            mat_score[i][j] = score;
            i++;
        }
        
        score++;
        top++;
        left++;
        bottom--;
        right--;
    }
    
    int t;
    cin>>t;
    
    while(t--){
        vector<vector<char>>mat(10,vector<char>(10));
        
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>mat[i][j];
            }
        }
        
        int result = 0;
        
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(mat[i][j] == 'X'){
                    result += mat_score[i][j];
                }
            }
        }
        
        cout<<result<<endl;
    }
    
}
