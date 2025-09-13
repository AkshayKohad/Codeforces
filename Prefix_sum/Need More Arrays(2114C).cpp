#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int>a(n);
        int maxi = 0;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi = max(maxi,a[i]);
        }
        
        vector<int>pref_cnt(maxi+1,0);
        
        int max_array = 1;
        
        for(int i=0;i<n;i++){
             pref_cnt[a[i]] = 1;
        }
        
        for(int i=2;i<=maxi;i++){
            pref_cnt[i] += pref_cnt[i-2];
            pref_cnt[i] = max(pref_cnt[i-1],pref_cnt[i]);
            max_array = max(max_array,pref_cnt[i]);
        }
        
        cout<<max_array<<endl;
    }
}
