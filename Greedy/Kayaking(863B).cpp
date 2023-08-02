#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int>a(2*n);
    
    for(int i=0;i<2*n;i++)
    cin>>a[i];
    
    sort(a.begin(),a.end());
    
    int result = INT_MAX;
    
    for(int i=0;i<2*n;i++)
    {
        
        for(int j=i+1;j<2*n;j++)
        {
         vector<int>res;
         
         for(int l=0;l<2*n;l++)
         {
             if(l==i || l==j)
             {
                 continue;
                 
             }
             
             res.push_back(a[l]);
         }
       //  cout<<res.size()<<endl;
         int sum = 0;
         for(int l=0;l<res.size();l=l+2)
         {
             sum += res[l+1]-res[l];
         }
         
         result = min(result,sum);
        }
    }
    
    cout<<result;
   

}
