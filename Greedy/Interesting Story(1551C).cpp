#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
      int n;
      cin>>n;
      
      vector<int>a;
      vector<int>b;
      vector<int>c;
      vector<int>d;
      vector<int>e;
      
      
      for(int i=0;i<n;i++)
      {
          string s;
          cin>>s;
          
          int len = s.length();
          
          int cnt_a=0;
          int cnt_b=0;
          int cnt_c=0;
          int cnt_d=0;
          int cnt_e=0;
          
          
          for(int j=0;j<len;j++)
          {
              if(s[j]=='a')
              cnt_a++;
              
              else if(s[j]=='b')
              cnt_b++;
              
              else if(s[j]=='c')
              cnt_c++;
              
              else if(s[j]=='d')
              cnt_d++;
              
              else
              cnt_e++;
              
          }
          
          int rem_a = len-cnt_a;
          int net_a = cnt_a-rem_a;
         
          a.push_back(net_a);
          
          int rem_b = len-cnt_b;
          int net_b = cnt_b-rem_b;
        
          b.push_back(net_b);
          
          int rem_c = len-cnt_c;
          int net_c = cnt_c-rem_c;
          
          c.push_back(net_c);
          
          int rem_d = len-cnt_d;
          int net_d = cnt_d-rem_d;
          
          d.push_back(net_d);
          
          int rem_e = len-cnt_e;
          int net_e = cnt_e-rem_e;
          
          e.push_back(net_e);
          
          
      }
      
      sort(a.begin(),a.end(),greater<int>());
      sort(b.begin(),b.end(),greater<int>());
      sort(c.begin(),c.end(),greater<int>());
      sort(d.begin(),d.end(),greater<int>());
      sort(e.begin(),e.end(),greater<int>());
      
      int res_int = 0;
      int temp = 0;
      
      int cnt = 0;
      
      for(int i=0;i<n;i++)
      {
          temp+=a[i];
          
          if(temp<=0)
          break;
          
          cnt++;
      }
      
      res_int = max(res_int,cnt);
      
      
      temp = 0;
      
      cnt = 0;
      
      for(int i=0;i<n;i++)
      {
          temp+=b[i];
          
          if(temp<=0)
          break;
          
          cnt++;
      }
      
      res_int = max(res_int,cnt);
      
       temp = 0;
      
      cnt = 0;
      
      for(int i=0;i<n;i++)
      {
          temp+=c[i];
          
          if(temp<=0)
          break;
          
          cnt++;
      }
      
      res_int = max(res_int,cnt);
      
       temp = 0;
      
      cnt = 0;
      
      for(int i=0;i<n;i++)
      {
          temp+=d[i];
          
          if(temp<=0)
          break;
          
          cnt++;
      }
      
      res_int = max(res_int,cnt);
      
       temp = 0;
      
      cnt = 0;
      
      for(int i=0;i<n;i++)
      {
          temp+=e[i];
          
          if(temp<=0)
          break;
          
          cnt++;
      }
      
      res_int = max(res_int,cnt);
      
      
      cout<<res_int<<endl;
    }
	
	return 0;
}
