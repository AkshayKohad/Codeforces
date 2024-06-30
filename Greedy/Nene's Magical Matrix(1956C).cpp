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
    
     int sum = 0;
     int num = n;
    
     int dim = n;
    
     while(dim>0)
     {
        sum += (dim+dim-1)*num;
        num--;
        dim--;
     }
    
     int cnt_operations = 2*n-1;
    
     cout<<sum<<" "<<cnt_operations<<"\n";
     
     int flag=1;
     
     while(flag<=n)
     {
         if(flag%2==1)
         {
             for(int i=flag;i<=min(flag+1,n);i++)
             {
                 cout<<"1 "<<i<<" ";
                 
                 for(int j=n;j>=1;j--)
                 {
                     cout<<j<<" ";
                 }
                 cout<<"\n";
             }
         }
         else{
             for(int i=flag;i<=min(flag+1,n);i++)
             {
                 cout<<"2 "<<i<<" ";
                 
                 for(int j=n;j>=1;j--)
                 {
                     cout<<j<<" ";
                 }
                 cout<<"\n";
             }
         }    
         flag++;
     }
     
    }    
}
