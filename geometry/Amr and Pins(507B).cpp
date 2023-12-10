#include <bits/stdc++.h>
using namespace std;



int main()
{
   int r,xi,yi,xf,yf;
   cin>>r>>xi>>yi>>xf>>yf;
   
   double dx = (double)xf-xi;
   double dy = (double)yf-yi;
   
   double d = sqrt(dx*dx + dy*dy);
   
   double diameter = (double)2*r;
   double res = ceil(d/diameter);
   
   cout<<res<<endl;
}
