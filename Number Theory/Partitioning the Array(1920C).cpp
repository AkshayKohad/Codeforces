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
        
        int res = 0;
        
        for(int i=1;i<=n;i++)
        {
              
            if(n%i==0)
            {
                int k = n/i;
                
                int g = 0;
                
                for(int j=0;j<k;j++)
                {
                    int diff=0;
                    
                    for(int w=j;w<n;w=w+k)
                    {
                        diff = __gcd(diff,abs(a[j]-a[w]));
                    }
                    
                    g = __gcd(g,diff);
                }
                
                if(g!=1)
                {
                  res++;
                }
            }
        }
        
        cout<<res<<"\n";   
    }
}
