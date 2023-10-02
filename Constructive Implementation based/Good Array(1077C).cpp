#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int>a(n);
    
    long long sum = 0;
    
    int first_max = 0;
    int second_max = 0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(first_max<a[i])
        {
            second_max = first_max;
            first_max = a[i];
        }
        else{
            if(second_max<a[i])
            second_max = a[i];
        }
        
        sum += a[i];
    }
    
   // cout<<first_max<<" "<<second_max<<endl;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        long long res = sum-a[i];
        
        if(a[i]==first_max)
        {
            if(res-second_max==second_max)
            {
               ans.push_back(i);   
            }
        }
        else{
            if(res-first_max==first_max)
            {
                ans.push_back(i);
            }
        } 
    }
    
    cout<<ans.size()<<endl;
    
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]+1<<" ";
    cout<<endl;
    
    
}
