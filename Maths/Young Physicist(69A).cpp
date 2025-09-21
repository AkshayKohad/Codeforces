#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<vector<int>>a(n);
    
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        a[i] = {x,y,z};
    }
    
    int net_x = 0;
    int net_y = 0;
    int net_z = 0;
    
    for(int i=0;i<n;i++){
        net_x += a[i][0];
        net_y += a[i][1];
        net_z += a[i][2];
    }
    
    if(net_x == 0 && net_y == 0 && net_z == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}
