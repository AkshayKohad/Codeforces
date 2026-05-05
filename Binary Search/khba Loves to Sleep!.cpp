#include <bits/stdc++.h>
using namespace std;

#define ll long long
void print_result(vector<ll>& result, ll k, ll limit, vector<ll>& a, ll x){
    ll n = a.size();

    ll last = 0; 

    // LEFT SIDE
    ll start = a[0] - limit;
    if(start >= 0){
        ll begin = max(0LL, last);
        while(begin <= start && k > 0){
            result.push_back(begin);
            begin++;
            k--;
        }
        last = begin; 
    }
    if(k == 0) return;

    // MIDDLE GAPS
    for(int i = 0; i < n-1; i++){
        ll cur = a[i] + limit;
        ll next = a[i+1] - limit;

        if(cur <= next){
            ll begin = max(cur, last); 

            while(begin <= next && k > 0){
                result.push_back(begin);
                begin++;
                k--;
            }
            last = begin; 
        }
        if(k == 0) return;
    }

    // RIGHT SIDE
    ll end = a[n-1] + limit;
    if(end <= x){
        ll begin = max(end, last); 
        while(begin <= x && k > 0){
            result.push_back(begin);
            begin++;
            k--;
        }
    }
}
bool check(vector<ll>&a,ll &n,ll limit,ll k, ll x){
    
    ll start = a[0]-limit;
    
    
    if(start>=0){
        k = k - (start+1);
    }
    
    if(k<=0)return true;
    
    ll end = a[n-1]+limit;
    
    if(end<=x){
        k = k - (x-end+1);
    }
    
    if(k<=0)return true;
    
    for(int i=0;i<n-1;i++){
        int cur = a[i] + limit;
        
        int next = a[i+1] - limit;
        
        if(cur <= next){
            int diff = next-cur+1;
            
            if(limit == 0)diff--;
            
            k = k-diff;
            if(k<=0)return true;
        }
    }
    
    if(limit == 0)k--;
    
    if(k<=0)return true;
    else return false;
    
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        ll l = 0;
        ll r = x;
        
        sort(a.begin(),a.end());
        
        ll ans = -1;
        
        while(l<=r){
            ll mid = (r-l)/2 + l;
            
            if(check(a,n,mid,k,x)){
                ans = mid;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        // cout<<ans<<endl;
        
        
        vector<ll>result;
        ll res_cnt = k;
        
        print_result(result,k,ans,a,x);
        
        sort(result.begin(),result.end());
        
        for(auto res : result){
            cout<<res<<" ";
        }
        
        cout<<endl;
        
        
    }
}
