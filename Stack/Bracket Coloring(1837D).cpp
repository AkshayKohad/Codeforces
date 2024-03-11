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
     
     string s;
     
     cin>>s;
     
     stack<char>st,st_rev;
     
     int color1 = 0;
     int color2 = 0;
     
     vector<int>result;
     
     
     for(int i=0;i<n;i++)
     {
         if(s[i]=='(')
         {
           if(st_rev.empty()==false && st_rev.top()==')')
           {
               st_rev.pop();
               result.push_back(2);
               color2++;
               
           }
           else{
               st.push('(');
               result.push_back(1);
               color1++;
           }
         }
         else{
             if(st.empty()==false && st.top()=='(')
             {
                 st.pop();
                 result.push_back(1);
                 color1++;
             }
             else{
                 st_rev.push(')');
                 result.push_back(2);
                 color2++;
             }
         }
     }
     
     if(st.empty()==true && st_rev.empty()==true)
     {
         int flag_multiple = 0;
         if(color1>0 && color2>0)
         {
             flag_multiple=1;
             cout<<"2"<<endl;
         }
         else{
             cout<<"1"<<endl;
         }
         
         
         for(int i=0;i<result.size();i++)
         {
             if(flag_multiple==0)
             cout<<"1 ";
             
             else
             cout<<result[i]<<" ";
         }
         cout<<endl;
     }
     else{
         cout<<"-1"<<endl;
     }
   }
}
