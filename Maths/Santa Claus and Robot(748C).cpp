#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  
  int prev_pointx = 0;
  int prev_pointy = 0;
  
  int cur_pointx = 0;
  int cur_pointy = 0;
  
  int temp_pointx = 0;
  int temp_pointy = 0;
  
  int res_points = 0;
  
  int dist = 0;
  
  for(int i=0;i<n;i++)
  {
      char ch;
      cin>>ch;
      
      temp_pointx = cur_pointx;
      temp_pointy = cur_pointy;
      
      if(ch=='L')
      {
          cur_pointx = cur_pointx-1;
      }
      else if(ch=='R')
      {
          cur_pointx = cur_pointx+1;
      }
      else if(ch=='U')
      {
          cur_pointy = cur_pointy-1;
      }
      else{
          cur_pointy = cur_pointy+1;
      }
      
      int cur_dist = abs(prev_pointx-cur_pointx) + abs(prev_pointy-cur_pointy);
      
      if(cur_dist<dist)
      {
          res_points++;
          prev_pointx = temp_pointx;
          prev_pointy = temp_pointy;
          
          dist=1;
          
      }
      else{
          dist = cur_dist;
      }
  }
  
  res_points++;
  
  cout<<res_points;
}
