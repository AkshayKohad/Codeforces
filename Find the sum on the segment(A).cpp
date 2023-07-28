#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    
    vector<ll>a(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int q;
    
    cin>>q;
    
    vector<ll>prefix_sum(n+1,0);
    
    partial_sum(a.begin(),a.end(),prefix_sum.begin()+1);
    
    for(int i=0;i<q;i++)
    {
        ll l,r;
        
        cin>>l>>r;
        
        cout<<prefix_sum[r]-prefix_sum[l-1]<<endl;
    }
    
	
	return 0;
}
