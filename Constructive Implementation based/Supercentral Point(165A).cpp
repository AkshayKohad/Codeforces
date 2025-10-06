#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<pair<int,int>>points(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        points[i] = {x,y};
    }
    
    int res_points = 0;
    
    for(int i=0;i<n;i++){
        bool left_side = false;
        bool right_side = false;
        bool top_side = false;
        bool bottom_side = false;
        int cur_x = points[i].first;
        int cur_y = points[i].second;
        
        for(int j=0;j<n;j++){
            if(i==j)continue;
            
            if(cur_x == points[j].first){
                if(cur_y > points[j].second) bottom_side = true;
                else if(cur_y < points[j].second) top_side = true;
            }else if(cur_y == points[j].second){
                if(cur_x > points[j].first) left_side = true;
                else if(cur_x < points[j].first) right_side = true;
            }
            
            if(left_side && right_side && top_side && bottom_side){
                res_points++;
                break;
            }   
        }
    }
    
    cout<<res_points<<endl;
}
