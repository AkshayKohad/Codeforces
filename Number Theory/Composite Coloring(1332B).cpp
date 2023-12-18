#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    vector<int>prime_num = {2,3,5,7,11,13,17,19,23,29,31};
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        
        vector<int>visited(n,0);
        
        int cur_col = 1;
        for(int i=0;i<prime_num.size();i++)
        {
            bool flag=0;
            
          for(int j=0;j<n;j++)
          {
              if(visited[j]==0 && a[j]%prime_num[i]==0)
              {
                  visited[j] = cur_col;
                  flag = 1;
                  
              }
          }
          
          if(flag)
          cur_col++;
        }
        
        cout<<cur_col-1<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<visited[i]<<" ";
        }
        cout<<endl;
        
    }
}
