#include <bits/stdc++.h>
using namespace std;

bool isRightAngle(int x1,int y1,int x2,int y2,int x3,int y3){
    vector<int>distance;
    int dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
    distance.push_back(dist);
    
    int dist2 = (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3);
    distance.push_back(dist2);
    
    int dist3 = (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3);
    distance.push_back(dist3);
    
    
    sort(distance.begin(),distance.end());
    
    if(distance[0] == 0)return false;
    
    if(distance[2] == distance[1] + distance[0]){
        //cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<x3<<" "<<y3<<endl;
        //cout<<distance[2]<<" "<<distance[1]<<" "<<distance[0]<<endl;
        return true;
    }
    
    return false;
}

int main(){
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    
    
    if(isRightAngle(x1,y1,x2,y2,x3,y3)){
        cout<<"RIGHT"<<endl;
        return 0;
    }
    
    if(isRightAngle(x1-1,y1,x2,y2,x3,y3) || isRightAngle(x1+1,y1,x2,y2,x3,y3) || isRightAngle(x1,y1-1,x2,y2,x3,y3) || isRightAngle(x1,y1+1,x2,y2,x3,y3) || isRightAngle(x1,y1,x2-1,y2,x3,y3) || isRightAngle(x1,y1,x2+1,y2,x3,y3) || isRightAngle(x1,y1,x2,y2-1,x3,y3) || isRightAngle(x1,y1,x2,y2+1,x3,y3) || isRightAngle(x1,y1,x2,y2,x3-1,y3) || isRightAngle(x1,y1,x2,y2,x3+1,y3) || isRightAngle(x1,y1,x2,y2,x3,y3-1) || isRightAngle(x1,y1,x2,y2,x3,y3+1)){
        cout<<"ALMOST"<<endl;
        return 0;
    }
    
    cout<<"NEITHER"<<endl;
    return 0;
}
