#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int xi,yi,xf,yf;
        cin>>xi>>yi>>xf>>yf;
        
        if(yi > yf){
            cout<<"-1"<<endl;
            continue;
        }
        
        int diff = yf-yi;
        
        xi = xi + diff;
        
        if(xi < xf){
            cout<<"-1"<<endl;
            continue;
        }
        
        diff += xi-xf;
        
        cout<<diff<<endl;
    }
}
