#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int total_ml = (k*l);
    
    int total_req_ml = total_ml/nl;
    
    int total_slice = c*d;
    
    int total_salt = p;
    
    int total_req_salt = p/np;
    
    int req_result = min({total_req_salt,total_req_ml,total_slice});
    
    int ans = req_result/n;
    
    cout<<ans;
}
