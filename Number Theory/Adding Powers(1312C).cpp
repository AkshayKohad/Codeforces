#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ios_base::sync_with_stdio(NULL);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int t;
  cin>>t;
  
  while(t--)
  {
      
      int visited[100];
      memset (visited, 0, sizeof (visited));
      int n,k;
      cin>>n>>k;
      
     
      bool flag = true;
      
      for(int i=0;i<n;i++)
      {
          ll temp;
          cin>>temp;
          
          
          
          if(temp==0)
          continue;
          
          
          
          int index = 0;
          
          while(temp>0)
          {
              if(k<=0)
              {
                  flag = false;
                  break;
              }
              
              ll rem = temp%k;
              if(rem>1)
              {
                  flag = false;
                  break;
              }
            //   b.push_back(rem+'0');
            
            if(rem==1)
              {
                  if(visited[index]!=0)
                  {
                      flag = false;
                      break;
                  }
                  visited[index]=1;
              }
              
              
              temp = temp/k;
              
             index++;
              
          }
         
         
      
      }
      
      if(flag)
      {
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
  }
}
