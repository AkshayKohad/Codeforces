#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int>a(n);
    
    int flag = 0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int val = pow(2,n)-1;
    
    for(int i=0;i<=val;i++)
    {
        int ans = 0;
        for(int j=n-1;j>=0;j--)
        {
            int bit = (i>>j)&1;
            if(bit==1)
            {
             ans += a[j];   
            }
            
            else{
                ans -= a[j];
            }
        }
        
        if(ans%360 == 0 )
        {
         flag = 1;
         break;
        }
    }
    
    if(flag==1)
    cout<<"YES";
    
    else{
        cout<<"NO";
    }
}
