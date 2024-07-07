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
        
        if(n==1)
        {
            cout<<"NO\n";
            continue;
        }
        
        int flag=0;
        
        for(int i=2;i<=1000;i++)
        {
            int val = 1+i+i*i;
            
            int temp = i*i;
        
            while(val<n)
            {
                temp = temp*i;
                val = val + temp;
            }
            
            
            if(val==n)
            {
                flag=1;
                break;
            }
        }
        
        if(flag)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
