#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,k;
    cin>>n>>k;
    
    string s;
    
    cin>>s;
    
  int cnt_a = 0;
  int cnt_b = 0;
  
  int i=0;
  int j=0;
  
  int result = 0;
  while(j<n)
  {
      if(s[j]=='a')
      {
          cnt_a++;
      }
      else{
          cnt_b++;
      }
      
      int cnt = min(cnt_a,cnt_b);
      
     while(cnt>k)
     {
         if(s[i]=='a')
         {
             cnt_a--;
         }
         else{
             cnt_b--;
         }
         
         cnt = min(cnt_a,cnt_b);
         i++;
     }
     
     result = max(j-i+1,result);
     
     j++;
  }
    
   
    
    
    cout<<result<<endl;
}
