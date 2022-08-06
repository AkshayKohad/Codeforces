#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int t;
    cin>>t;
    
    while(t--)
    {
      int n,m;
      
      cin>>n>>m;
      
      vector<vector<char>>mat(n,vector<char>(m));
      
      for(int i=0;i<n;i++)
      {
         for(int j=0;j<m;j++)
         {
            cin>>mat[i][j];
         }
      }
      
      int count = 0;
      for(int j=0;j<m;j++)
      {
         if(mat[n-1][j]=='D')
         count++;
      }
      
      for(int i=0;i<n;i++)
      {
         if(mat[i][m-1]=='R')
         count++;
      }
      
      cout<<count<<endl;
    }
	return 0;
}
