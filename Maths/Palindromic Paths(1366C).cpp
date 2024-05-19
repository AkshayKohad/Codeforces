#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      
      vector<int>grouping_manhatan[n+m];
      
      for(int i=0;i<n;i++)
      {
         for(int j=0;j<m;j++)
         {
             int a;
             cin>>a;
             
             int manhatan_first_ele = i+j;
             int manhatan_last_ele = (n-1-i) + (m-1-j);
             
             if(manhatan_last_ele != manhatan_first_ele)
             {
                 grouping_manhatan[min(manhatan_first_ele,manhatan_last_ele)].push_back(a);
             }
             
         }
      }
      
      
      int ans = 0;
      
      
      for(int i=0;i<n+m;i++)
      {
          int zero=0;
          int one=0;
          
          for(int j=0;j<grouping_manhatan[i].size();j++)
          {
              if(grouping_manhatan[i][j]==0)
              {
                  zero++;
              }
              else
              {
                  one++;
              }
          }
          
          ans += min(zero,one);
      }
      
      cout<<ans<<endl;
      
    }
}
