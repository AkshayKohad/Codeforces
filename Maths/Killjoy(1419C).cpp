#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        int val_sum = 0;
        int cnt_diff = 0;
        
        for(int i=0;i<n;i++)
        {
            
            val_sum += x-a[i];
            
            if(a[i]!=x)
            {
                cnt_diff++;
            }
        }
        
        if(cnt_diff==0)
        {
            cout<<0<<endl;
        }
        else if(val_sum==0 || cnt_diff<n)
        {
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}
