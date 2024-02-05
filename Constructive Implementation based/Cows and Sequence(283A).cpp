#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;
    
    stack<int>st;
    
    st.push(0);
    double sum = 0.0;
    
    unordered_map<int,int>mp;
    int sz = 1;
    mp[0] = 0;
    
    while(n--)
    {
        int t;
        cin>>t;
      
        if(t==1)
        {
            int index,val;
            
            cin>>index>>val;
            
            sum += (double)val*(double)index;
            
            mp[index-1] += val;

        }
        else if(t==2){
            int k;
            cin>>k;
            sum += (double)k;
            
            st.push(k);
            sz++;
          
        }
        else{
            
           
              int val = mp[sz-1];
              
              if(mp.find(sz-1)!=mp.end())
                mp.erase(sz-1);
            
              if(sz-1>0)
              {
                  mp[sz-2]+= val;
              }
            
              sum -= (double)st.top();
              sum -= (double)val;
            
              st.pop();
              sz--;
          
        }
        
        printf("%.10lf\n", (double)(sum) / (double)(sz));
        
    }
}
