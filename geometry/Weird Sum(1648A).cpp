// since it is manhattan distance-> x and y coordinate are completely independent of each other.
// so map same color's all x coordinate and same color's all y coordinate 
// and then do summation of difference as shown below
// Note : In Manhattan distance x and y coordinate are independent 


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>>mat(n,vector<int>(m));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    map<int,vector<int>>pointx;
    map<int,vector<int>>pointy;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            pointx[mat[i][j]].push_back(i);
            pointy[mat[i][j]].push_back(j);
        }
    }
    
    
    long long int res_sum = 0;
    
    // sorting the coordinates
  
    for(auto k:pointx)
    {
        sort(pointx[k.first].begin(),pointx[k.first].end());
        
        long long int pref_sum = 0;
        int cnt = 0;
        for(auto val : pointx[k.first])
        {
            pref_sum += val;
            cnt++;
        }
        
        for(auto val : pointx[k.first])
        {
            res_sum = res_sum + pref_sum - cnt*val;
            
            pref_sum = pref_sum-val;
            cnt--;
        }
        
    }

  // Summation Process
  
    for(auto k:pointy)
    {
        sort(pointy[k.first].begin(),pointy[k.first].end());
        
         long long int pref_sum = 0;
        int cnt = 0;
        for(auto val : pointy[k.first])
        {
            pref_sum += val;
            cnt++;
        }
        
        for(auto val : pointy[k.first])
        {
            res_sum = res_sum + pref_sum - (long long int)cnt*val;
            
            pref_sum = pref_sum-val;
            cnt--;
        }
       
    }
    
    cout<<res_sum<<endl;
    
    
}
