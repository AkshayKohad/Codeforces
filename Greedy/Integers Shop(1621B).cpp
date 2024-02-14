#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll n;
      cin>>n;
      
      ll maxn = 0;
      ll minL = 0;
      ll maxR = 0;
      ll valL = 0;
      ll valR = 0;
      ll minval = 0;
      
      for(ll i=0;i<n;i++)
      {
          ll l,r,c;
          cin>>l>>r>>c;
          
          if(i==0)
          {
              minL = l;
              maxR = r;
              minval = c;
              maxn = r-l+1;
              valL = c;
              valR = c;
              
          }
          else{
              if(l<minL)
              {
                  minL = l;
                  valL = c;
              }
              else if(l==minL){
                  valL = min(valL,c);
              }
              
              if(r>maxR)
              {
                  maxR = r;
                  valR = c;
              }
              else if(r==maxR)
              {
                  valR = min(valR,c);
              }
              
              if(r-l+1 > maxn)
              {
                  maxn = r-l+1;
                  minval = c;
              }
              else if(r-l+1==maxn)
              {
                  minval = min(minval,c);
              }
          }
          
          ll ans = valL + valR;
          
          if(maxR-minL+1 == maxn)
          {
              ans = min(ans,minval);
          }
          
          cout<<ans<<endl;
      }
  }
}
