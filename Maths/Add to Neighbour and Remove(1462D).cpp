#include <bits/stdc++.h>
using namespace std;

bool check(int val,vector<int>a,int n)
{
    int cur = 0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>val)
        return false;
        
        if(cur+a[i]>val)
        {
            if(cur==val)
            cur=a[i];
            
            else
            return false;
        }
        else{
            cur=cur+a[i];
        }
    }
    
    if(cur==val)
    return true;
    
    return false;
}

int main()
{
 int t;
 cin>>t;
 
 while(t--)
 {
     int n;
     cin>>n;
     
     vector<int>a(n);
     for(int i=0;i<n;i++)
     cin>>a[i];
     
     int sum = 0;
     
     int result = n+1;
     
     for(int i=0;i<n;i++)
     {
         int flag = 1;
         sum += a[i];
         int cnt = i;    
         int cur_sum = 0;
         int start = i+1;
         
       for(int j=i+1;j<n;j++)
       {
           cur_sum += a[j];
           
           if(cur_sum>sum)
           {
               flag=0;
               break;
           }
           else if(cur_sum==sum)
           {
               cnt += j-start;
               start = j+1;
               
               cur_sum=0;
           }
           
       }
       
       if(cur_sum==0 && flag==1)
       {
           
           result = min(result,cnt);
       }
       
      
       
       
     }
     
     cout<<result<<endl;
     
 }
}
