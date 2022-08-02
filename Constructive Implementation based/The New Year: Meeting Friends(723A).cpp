#include <bits/stdc++.h>
using namespace std;

int main(){
   
   int x1,x2,x3;
   
   cin>>x1>>x2>>x3;
   
   int maxi = max({x1,x2,x3});
   
   int mini = min({x1,x2,x3});
   
   int mid;
   
   if(x1!=maxi && x1!=mini)
   mid = x1;
   
   else if(x2!=maxi && x2!=mini)
   mid = x2;
   
   else if(x3!=maxi && x3!=mini)
   mid = x3;
    
    
 int ans = abs(mid-mini) + abs(mid-maxi);    
    cout<<ans;
}
