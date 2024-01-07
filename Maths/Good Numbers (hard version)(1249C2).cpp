#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll q;
    cin>>q;
    
    while(q--)
    {
        ll n;
        cin>>n;
        int pos2 = -1;
        vector<int>a;
        while(n>0)
        {
               a.push_back(n%3);
               
               if(n%3==2)
               {
                  pos2 = a.size()-1;   
               }
               
               n=n/3;
        }
        
        if(pos2!=-1)
        {
            int j = pos2;
            int sz = a.size();
            int carry=1;
            a[j]=1;
            while(j<sz)
            {
                if(a[j]==1)
                {
                    a[j]=0;
                    carry=1;
                }
                else{
                    a[j]=1;
                    carry=0;
                    break;
                }
                j++;
            }
            
            if(carry==1)
            {
                a.push_back(1);
            }
            
            for(int k=0;k<pos2;k++)
            a[k] = 0;
            
        }
        
        ll res = 0;
            ll power = 1;
          //  cout<<a.size()<<endl;
            for(int i=0;i<a.size();i++)
            {
               if(a[i]==1)
               {
                   res += power;
               }
               
               power = power*3;
            }
            
            cout<<res<<endl;
    }
}
