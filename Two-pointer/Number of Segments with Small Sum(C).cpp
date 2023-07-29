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
    ull res = 0;
    for(r=0;r<n;r++)
    {
        sum += a[r];
        
        while(sum>s)
        {
            sum -= a[l];
            l++;
        }
        
        
        res += r-l+1;
        
    }
    
   
    cout<<res;
	return 0;
}
