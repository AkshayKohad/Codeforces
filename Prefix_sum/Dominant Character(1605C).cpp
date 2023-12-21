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
        
        string s;
        cin>>s;
        
        vector<int>a_index;
        vector<int>prefix_b(n,0);
        vector<int>prefix_c(n,0);
        
        if(s[0]=='b')
        {
            prefix_b[0] = 1;
        }
        else if(s[0]=='c')
        {
            prefix_c[0] = 1;
        }
        else{
            a_index.push_back(0);
        }
        for(int i=1;i<n;i++)
        {
            if(s[i]=='b')
            {
              prefix_b[i] = 1 + prefix_b[i-1];
              prefix_c[i] = prefix_c[i-1];
            }
            else if(s[i]=='c')
            {
              prefix_c[i] = 1 + prefix_c[i-1];
              prefix_b[i] = prefix_b[i-1];
            }
            else{
              a_index.push_back(i);
              prefix_c[i] = prefix_c[i-1];
              prefix_b[i] = prefix_b[i-1];
            }
        }
        
        int m = a_index.size();
        int res = INT_MAX;
        
        
        for(int i=0;i<m;i++)
        {
            if(i+2<m)
            {
                int index = a_index[i];
                int index1 = a_index[i+1];
                
                int count_b = prefix_b[index1]-prefix_b[index];
                
                int count_c = prefix_c[index1]-prefix_c[index];
                
                if(count_c<2 && count_b<2)
                {
                    res = min(res,index1-index+1);
                }
                
                index1 = a_index[i+2];
                
                 count_b = prefix_b[index1]-prefix_b[index];
                
                 count_c = prefix_c[index1]-prefix_c[index];
                
                if(count_c<3 && count_b<3)
                {
                    res = min(res,index1-index+1);
                }
            }
            else if(i+1<m)
            {
                int index = a_index[i];
                int index1 = a_index[i+1];
                
                int count_b = prefix_b[index1]-prefix_b[index];
                
                int count_c = prefix_c[index1]-prefix_c[index];
                
                if(count_c<2 && count_b<2)
                {
                    res = min(res,index1-index+1);
                }
            }
        }
        
        if(res==INT_MAX)
        res=-1;
        
        cout<<res<<endl;
    }
}
