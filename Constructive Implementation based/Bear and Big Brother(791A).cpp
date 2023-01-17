#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll a,b;
  
  cin>>a>>b;
  
  ll n=0;
  
  ll diff = b-a;
  
  ll exp1 = pow(3,n)*a;
  
  ll exp2 = pow(2,n)*b;
   
  
  while(exp1<=exp2)
  {
    n++;
    
    exp1 = pow(3,n)*a;
  
    exp2 = pow(2,n)*b;
  }
  
  cout<<n<<endl;
  
  return 0;
}
