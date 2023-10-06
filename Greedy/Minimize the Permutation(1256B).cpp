#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    
    while(q--)
    {
        int n;
        cin>>n;
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        int k = n-1;
        
        int i=0;
        while(i<n)
        {
            int min_val = a[i];
            int dist=0;
            int index = i;
            for(int j=i;j<n;j++)
            {
                if(min_val>a[j])
                {
                    if(j-i<=k)
                    {
                        min_val = a[j];
                        dist = j-i;
                        index=j;
                    }
                }
            }
            
            for(int k=index-1;k>=i;k--)
            {
                swap(a[k],a[k+1]);
            }
            
            k = k-dist;
            
            if(dist==0)
            i=i+1;
            
            else
            i=index;
        }
        
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
