#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,d;
    cin>>n>>m>>d;
    
    vector<int>a;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int val;
            cin>>val;
            
            a.push_back(val);
        }
    }
    
    sort(a.begin(),a.end());
    
    int sz = a.size();
  //  cout<<sz<<endl;
    if(sz==1)
    {
        cout<<0<<endl;
        return 0;
    }
    
    for(int i=0;i<sz-1;i++)
    {
      int diff = a[i+1]-a[i];
      
     // cout<<diff<<endl;
      if(diff%d!=0)
      {
          cout<<-1<<endl;
          return 0;
      }
      
    }
    
    int index = sz/2;
    
    int result = 0;
    
    for(int i=0;i<sz;i++)
    {
        int diff = abs(a[i]-a[index]);
        
        result += diff/d;
    }
    
    cout<<result;
}
