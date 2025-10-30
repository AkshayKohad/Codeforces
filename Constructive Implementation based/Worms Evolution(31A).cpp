#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int>a(n);
    vector<int>visited(1001,-1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        visited[a[i]]=i;
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int val = a[i]+a[j];
            if(val>1000)continue;
            
            if(visited[val]!=-1){
                cout<<visited[val]+1<<" "<<i+1<<" "<<j+1<<endl;
                return 0;
            }
        }
    }
    
    cout<<"-1"<<endl;
    return 0;
}
