#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int>cnt(31,0);
        
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            
            
            for(int j=30;j>=0;j--)
            {
                int bit = (val>>j)&1;
                
                if(bit==1)
                {
                    cnt[j]++;
                }
            }
        }
        
        int gcd = 0;
        
        for(int i=30;i>=0;i--)
        {
            gcd = __gcd(gcd,cnt[i]);
        }
        
        for(int i=1;i<=n;i++)
        {
            if(gcd%i==0)
            {
                cout<<i<<" ";
            }
        }
        
        cout<<"\n";
    }
}
