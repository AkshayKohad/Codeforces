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
        
        vector<int>cake_stack(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>cake_stack[i];
        }
        
        vector<int>result(n);
        
        int level = 0;
        
        for(int i=n-1;i>=0;i--)
        {
            level = max(level,cake_stack[i]);
            
            if(level==0)
            {
                result[i] = 0;
            }
            else{
                level--;
                result[i] = 1;
            }
        }
        
        for(int i=0;i<n;i++)
        cout<<result[i]<<" ";
        
        cout<<endl;
        
        
    }
}
