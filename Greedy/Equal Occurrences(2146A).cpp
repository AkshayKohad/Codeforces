#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int i=0;
        vector<int>freq_record;
        while(i<n){
            int j=i;
            int val = a[i];
            int freq = 0;
            
            while(j<n && val == a[j]){
                freq++;
                j++;
            }
            
            i=j;
            freq_record.push_back(freq);
        }
        
        sort(freq_record.begin(),freq_record.end());
        
        int result = 0;
        int freq_size = freq_record.size();
        
        for(int i=0;i<freq_size;i++){
            result = max(result,(freq_size-i)*freq_record[i]);
        }
        
        cout<<result<<endl;
    }
}
