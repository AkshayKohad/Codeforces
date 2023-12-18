#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  
  int m;
  cin>>m;
  
  queue<int>a;
  
  for(int i=0;i<m;i++)
  {
      int val;
      cin>>val;
      a.push(val);
  }
  
  int l;
  cin>>l;
  
  queue<int>b;
  
  for(int i=0;i<l;i++)
  {
      int val;
      cin>>val;
      b.push(val);
  }
  
  set<queue<int>>s_a;
  set<queue<int>>s_b;
  s_a.insert(a);
  s_b.insert(b);
  
  int cnt = 0;
  int flag = 0;
  
  
  while(m>0 && l>0)
  {
      
      
      if(a.front()>b.front())
      {
          a.push(b.front());
          a.push(a.front());
          a.pop();
          b.pop();
          m++;
          l--;
          cnt++;
      }
      else{
          b.push(a.front());
          b.push(b.front());
          b.pop();
          a.pop();
          l++;
          m--;
          cnt++;
      }
      
     
      
      if(s_a.find(a)!=s_a.end() &&  s_b.find(b)!=s_b.end() )
      {
          flag=1;
          break;
      }
      
       s_a.insert(a);
       s_b.insert(b);
  }
  
  if(flag==1)
  {
      cout<<-1<<endl;
  }
  else{
      
       cout<<cnt<<" ";
      if(a.size()==0)
      cout<<2<<endl;
      else
      cout<<1<<endl;
     
  }
  
}
