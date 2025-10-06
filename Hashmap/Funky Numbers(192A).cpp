#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_set<int>st;
    int sum = 0;
    for(int i=1,sum=0;sum<=1e9;i++){
        sum += i;
        st.insert(sum);
    }
    int flag = 0;
    for(auto it : st){
        int val = it;
        if(st.find(n-val) != st.end()){
            flag=1;
            break;
        }
    }  
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
