#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   
   int val= 0;
   
   int res = INT_MIN;
   
   for(int i=0;i<n;i++)
   {
     int a,b;
     
     cin>>a>>b;
     
     val = val - a + b;
     
     res = max(res,val);
   }
   
   cout<<res<<endl;
}
