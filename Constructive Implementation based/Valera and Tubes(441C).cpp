#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
  IOS
  
  int n,m,k;
  cin>>n>>m>>k;
  
  k = k-1;
  
  int i=1;
  int j=1;
  
  vector<vector<pair<int,int>>>res;
  
  while(k--)
  {
     vector<pair<int,int>>temp;
     temp.push_back({i,j});
     
     matrix[i][j] = 1;
     
    
     if(i%2==1)
     {
         j++;
     }
     else{
         j--;
     }
     
     if(j>m)
     {
         i++;
         j=m;
        temp.push_back({i,j});
         
     }
     else if(j<=0)
     {
         i++;
         j=1;
         temp.push_back({i,j});
     
        
     }
     else{
            temp.push_back({i,j});
     }
     
     res.push_back(temp);
     if(i%2==1)
     {
         j++;
     }
     else{
         j--;
     }
     
     
     if(j>m)
     {
         i++;
         j=m;  
     }
     else if(j<=0)
     {
         i++;
         j=1;        
     }  
  }
  
  vector<pair<int,int>>temp;
  
  while(i<=n)
  {
     temp.push_back({i,j});
     
    
     if(i%2==1)
     {
         j++;
     }
     else{
     
         j--;
     }
     
      if(j>m)
     {
         i++;
         j=m;   
     }
     else if(j<=0)
     {
         i++;
         j=1;  
     }
      
  }
  
  res.push_back(temp);
  
  for(int l=0;l<res.size();l++)
  {
      cout<<res[l].size()<<" ";
     
      for(int w=0;w<res[l].size();w++)
      {
          cout<<res[l][w].first <<" "<<res[l][w].second<<" ";
      }
      cout<<endl;
  }
}
