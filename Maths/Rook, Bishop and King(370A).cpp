#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    
    int rook_moves = 0;
    int bishop_moves = 0;
    int king_moves = 0;
    
    if(x1==x2 && y1==y2){
        cout<<"0 0 0"<<endl;
        return 0;
    }
    
    // For rook
    if(x1==x2 || y1==y2){
        rook_moves = 1;
    }else{
        rook_moves = 2;
    }
    
    // For bishop
    if((x1+y1)%2 != (x2+y2)%2)bishop_moves = 0;
    else{
        if(x1+y1 == x2+y2 || x1-y1 == x2-y2)bishop_moves = 1;
        else bishop_moves = 2;
    }
    
    // For king
    int diff = abs(abs(x1-x2) - abs(y1-y2));
    
    if(abs(x1-x2)<=abs(y1-y2)){
        king_moves = diff + abs(x1-x2);
    }else{
        king_moves = diff + abs(y1-y2);
    }
    
    cout<<rook_moves<<" "<<bishop_moves<<" "<<king_moves<<endl;
}
