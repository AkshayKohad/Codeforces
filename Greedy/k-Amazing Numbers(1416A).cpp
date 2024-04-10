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
      
      vector<int>a(n+1);
      
      vector<int>position[n+1];
      
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          position[a[i]].push_back(i);
      }
      
      
      vector<int>result(n+1,-1);
      
      int start = 1;
      int end = n;
      
      for(int i=1;i<=n;i++)
      {
          if(position[i].size()==0)
          continue;
          
          int diff = position[i][0]+1;
          
          for(int j=1;j<position[i].size();j++)
          {
              int temp = position[i][j]-position[i][j-1];
              
              diff = max(temp,diff);
          }
          
          diff = max(diff,n-position[i][position[i].size()-1]);
          
          if(diff>end)
          continue;
          
          else{
              result[diff]=i;
              end = diff-1;
          }
      }
      
      int i=1;
      while(i<=n)
      {
          if(result[i]==-1)
          {
           i++;      
           continue;
          }
          int val = result[i];
          
          while(i<=n)
          {
              if(result[i]>=val || result[i]==-1)
              {
                  result[i]=val;
                  i++;
              }
              else{
                  break;
              }
          }
      }
      
      for(int i=1;i<=n;i++)
      cout<<result[i]<<" ";

      cout<<endl; 
    }
}
