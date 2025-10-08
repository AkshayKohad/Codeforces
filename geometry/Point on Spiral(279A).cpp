#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    
    if(y==0 && (x==0 || x==1)){
        cout<<0<<endl;
        return 0;
    }else if(x==1 && y==1){
        cout<<1<<endl;
        return 0;
    }else if(x==-1 && y==-1){
        cout<<3<<endl;
        return 0;
    }
    
    if(abs(x) > abs(y)){
        int res_x = x;
        int res_y = x;
        
        if(res_y > 0 && res_x > 0){
            int diff = res_x - 1;
            
            int result = diff*4 + 1;
            
            if(res_x > x)result++;
            
            if(res_x == x  && res_y == -y + 1) result--;
            cout<<result<<endl;
        }else{
            int diff = abs(res_x) - 1;
            int result = diff*4 + 3;
            
            if(res_x < x)result++;
            
            if(res_x == x && res_y == -y) result--;
            cout<<result<<endl;
        }
    }else{
        int res_x = y;
        int res_y = y;
        
        if(res_y > 0 && res_x > 0){
            int diff = res_x - 1;
            
            int result = diff*4 + 1;
            
            if(res_x > x)result++;
            if(res_x == x  && res_y == -y + 1) result--;
            cout<<result<<endl;
        }else{
            int diff = abs(res_x) - 1;
            int result = diff*4 + 3;
            
            if(res_x < x)result++;
            if(res_x == x && res_y == -y) result--;
            cout<<result<<endl;
        }
    }
    
    
}
