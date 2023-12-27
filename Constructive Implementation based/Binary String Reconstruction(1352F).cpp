#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n0,n1,n2;
        
        cin>>n0>>n1>>n2;
        
        int prev;
        int flag_0=0;
        if(n0>0)
        {
         flag_0=1;   
         n0++;
         prev=0;
        }
        while(n0--)
        {
            cout<<"0";
        }
        
        int flag_2=0;
        
        
        if(n2>0)
        {
          flag_2=1;    
          n2++;
          prev=1;
        }
        
        while(n2--)
        {
            cout<<"1";
        }
        
        if(flag_0 && flag_2)
        n1--;
        
        else if(!flag_2 && !flag_0){
            cout<<"0";
            prev=0;
        }
        
        
        while(n1>0)
        {
            
          if(prev==1)
          {
              cout<<"0";
              prev=0;
          }
          else{
              cout<<"1";
              prev=1;
          }
          n1--;
          
        }
        
        cout<<endl;
    }
}
