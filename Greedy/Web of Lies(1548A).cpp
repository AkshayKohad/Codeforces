#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<int>a(n,0);
    
    int res = n;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        
        int mini = min(u,v);
        
        if(a[mini]==0)
        {
         a[mini]++;
         res--;
        }
        else{
            a[mini]++;
        }
    }
    
    int q;
    cin>>q;
    
    while(q--)
    {
        int op;
        cin>>op;
        
        if(op==3)
        {
            cout<<res<<endl;
        }
        else if(op==2)
        {
            int u,v;
            cin>>u>>v;
            
            int mini = min(u,v);
            
            a[mini]--;
            
            if(a[mini]==0)
            res++;
        }
        else{
            int u,v;
            cin>>u>>v;
            
            int mini = min(u,v);
            
            if(a[mini]==0)
            {
                a[mini]++;
                res--;
            }
            else{
                a[mini]++;
            }
        }
    }
}
