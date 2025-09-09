#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
vector<pair<ll,ll>>res(19);

ll count = 1;
res[0] = {1,3};

for(int i=1;i<19;i++){
    ll count_prev = count;
    count  = count*3;
    ll count_next = count*3;
    
    res[i] = {count,count_next + i*count_prev};
}

ll t;
cin>>t;

while(t--){
    ll n;
    cin>>n;
    
    ll cnt = 18;
    ll result = 0;
    
    while(n>0){
        while(n>=res[cnt].first){
            n = n-res[cnt].first;
            result += res[cnt].second;
        }
        cnt--;
    }
    
    cout<<result<<endl;
}

}
