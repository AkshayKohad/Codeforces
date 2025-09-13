#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,s;
        cin>>n>>s;
        
        int result_cnt = 0;
        
        for(int i=0;i<n;i++){
            int dx,dy,x,y;
            cin>>dx>>dy>>x>>y;
            
            if( ((dx>0 && dy>0) || (dx<0 && dy<0)) && (x==y) ){
                result_cnt++;
            }else if( ((dx>0 && dy<0) || (dx<0 && dy>0)) && (x==s-y)){
                result_cnt++;
            }
        }
        
        cout<<result_cnt<<endl;
    }
}
