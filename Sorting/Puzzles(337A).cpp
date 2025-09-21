#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    vector<int>puzzles(m);
    for(int i=0;i<m;i++)cin>>puzzles[i];
    
    sort(puzzles.begin(),puzzles.end());
    
    int res = puzzles[n-1] - puzzles[0];
    
    int i=1;
    int j=n;
    
    while(j<m){
        res = min(res,puzzles[j]-puzzles[i]);
        i++;
        j++;
    }
    
    cout<<res<<endl;
}
