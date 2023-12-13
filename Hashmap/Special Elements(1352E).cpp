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
      
      vector<int>a(n);
      
      vector<int>occurrence_cnt(n+1,0);
      for(int i=0;i<n;i++)
      {
       cin>>a[i];
       occurrence_cnt[a[i]]++;
      }      
    
    vector<int>subarray_sum_cnt(n+1,0);
    
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += a[j];
            
            if(sum<=n)
            subarray_sum_cnt[sum]++;
            
            else
            break;
        }
    }
    
    int result = 0;
    
    
    for(int i=0;i<n;i++)
    {
        if(subarray_sum_cnt[a[i]] > occurrence_cnt[a[i]])
        result++;
    }
    
    cout<<result<<endl;
      
  }
}
