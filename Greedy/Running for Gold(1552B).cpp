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
      
      vector<vector<int>>a(n,vector<int>(5));
      
      for(int i=0;i<n;i++)
      {
          cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3]>>a[i][4];
      }
      
      int index = 0;
     for(int i=1;i<n;i++)
     {
         vector<int>f = a[index];
         vector<int>s = a[i];
         int cnt = 0;
         for(int j=0;j<5;j++)
         {
             if(a[index][j]>a[i][j])
             {
                 cnt++;
             }
         }
         
         if(cnt>=3)
         {
             index = i;
         }
         
     }
     
     
     for(int i=0;i<n;i++)
     {
         if(i==index)continue;
         
          vector<int>f = a[index];
         vector<int>s = a[i];
         
         int cnt = 0;
         for(int j=0;j<5;j++)
         {
             if(a[i][j]>a[index][j])
             {
                 cnt++;
             }
         }
         
         if(cnt<3)
         {
             index=-2;
             break;
         }
     }
     
     cout<<index+1<<endl;
      
  }
}
