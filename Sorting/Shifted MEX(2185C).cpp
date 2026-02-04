#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        sort(a,a+n);
        
        int i=0;
        int max_cnt = 0;
        while(i<n){
            int j=i;
            int cnt = 1;
            
            int cur = a[i];
            while(j<n){
                if(cur==a[j]){
                    cur = a[j];
                    j++;
                }else if(cur+1==a[j]){
                    cur = a[j];
                    j++;
                    cnt++;
                }else{
                    break;
                }
                
            }
            max_cnt = max(max_cnt,cnt);
            i=j;
        }
        
        cout<<max_cnt<<endl;
        
    }
}
