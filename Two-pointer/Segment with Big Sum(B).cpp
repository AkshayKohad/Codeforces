#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ull n;
    
    ull s;
    cin>>n>>s;
    
    vector<ull>a(n);
    
    for(ull i=0;i<n;i++)
    {
      cin>>a[i];  
    }
    
    ull sum = 0;
    ull r=0;
    ull l=0;
    ull res = n+1;
    for(r=0;r<n;r++)
    {
        sum += a[r];
        
        while(sum-a[l]>=s)
        {
            sum -= a[l];
            l++;
        }
        
        if(sum>=s)
        res = min(res,r-l+1);
        
    }
    
    if(res==n+1)
    cout<<-1;
    
    else
    cout<<res;
	return 0;
}
