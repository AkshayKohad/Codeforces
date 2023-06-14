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
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        vector<int>set_bit_count(31,0);
        
        for(int i=0;i<n;i++)
        {
            for(int j=30;j>=0;j--)
            {
                int bit = (a[i]>>j) & 1;
                
                set_bit_count[j] += bit;
            }
        }
        
        int ans = __gcd(set_bit_count[0],set_bit_count[1]);
        
        for(int i=2;i<=30;i++)
        {
            ans = __gcd(ans,set_bit_count[i]);
        }
        
        if(ans==0)
        {
            for(int j=0;j<n;j++)
            {
                cout<<j+1<<" ";
            }
            cout<<endl;
        }
        
        else{
            for(int j=1;j<=ans;j++)
            {
                if(ans%j==0)
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
}
