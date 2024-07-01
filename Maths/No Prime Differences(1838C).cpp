#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n<=1)
    return false;
    
    if(n<=3)
    return true;
    
    if(n%2==0 || n%3==0) return false;
    
    for(int i=5;i*i<=n;i=i+6)
    {
       if (n % i == 0 || n % (i + 2) == 0) 
            return false;    
    }
    return true;
    
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        
        
        bool flag = isprime(m);
        
        if(flag)
        {
            
            
            for(int i=n-2;i>=0;i=i-2)
            {
                for(int j=i*m+1;j<=(i+1)*m;j++)
                {
                    cout<<j<<" ";
                }
                cout<<"\n";
            }
            
            for(int i=n-1;i>=0;i=i-2)
            {
                for(int j=i*m+1;j<=(i+1)*m;j++)
                {
                    cout<<j<<" ";
                }
                cout<<"\n";
            }
        }
        else{
            for(int i=0;i<n;i++)
            {
                for(int j=i*m+1;j<=(i+1)*m;j++)
                {
                    cout<<j<<" ";
                }
                cout<<"\n";
            }
        }
        cout<<"\n";
    }
}
