#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        int price,quality;
        cin>>price>>quality;
        a[i].first = price;
        a[i].second = quality;
    }
    
    sort(a.begin(),a.end());
    
    int cur_quality = a[0].second;
    
    int flag = 0;
    for(int i=1;i<n;i++){
        if(cur_quality>a[i].second){
            flag=1;
            break;
        }else{
            cur_quality = a[i].second;
        }
    }
    
    if(flag){
        cout<<"Happy Alex";
    }else{
        cout<<"Poor Alex";
    }
    
    return 0;
}
