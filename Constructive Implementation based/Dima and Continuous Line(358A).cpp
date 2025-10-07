#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    
    vector<int>points(n);
    for(int i=0;i<n;i++){
        cin>>points[i];
    }
    
    if(n<=2){
        cout<<"no"<<endl;
        return 0;
    }
    
    vector<pair<int,int>>semi_circles;
    for(int i=0;i<n-1;i++){
        semi_circles.push_back({min(points[i],points[i+1]),max(points[i],points[i+1])});
    }
    
    sort(semi_circles.begin(),semi_circles.end());
    int flag = 0;
    
    for(int i=0;i<semi_circles.size();i++){
        for(int j=i+1;j<semi_circles.size();j++){
            if(semi_circles[i].first == semi_circles[j].first){
                continue;
            }else{
                if((semi_circles[i].second > semi_circles[j].first) && (semi_circles[i].second < semi_circles[j].second) ){
                    flag = 1;
                    break;
                }
            }
        }
        
        if(flag == 1)break;
    }
    
    if(flag)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
