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
        
        int ra,pa,sa;
        
        cin>>ra>>pa>>sa;
        
        int rb=0,pb=0,sb=0;
        
        string k;
        cin>>k;
        
        for(int i=0;i<n;i++)
        {
            if(k[i]=='R')
            rb++;
            
            else if(k[i]=='S')
            sb++;
            
            else
            pb++;
        }
        
        
        int res = min(rb,pa) + min(sb,ra) + min(pb,sa);
      //  cout<<res<<endl;
        int req = ceil((float)n/2);
        //cout<<req<<endl;
        if(res<req)
        {
            cout<<"NO"<<endl;
            continue;
        }
        
        string result(n,'0');
        for(int i=0;i<n;i++)
        {
            if(k[i]=='P' && sa>0)
            {
                sa--;
                result[i]='S';
            }
            else if(k[i]=='S' && ra>0)
            {
                ra--;
                result[i]='R';
            }
            else if(k[i]=='R' && pa>0)
            {
                pa--;
                result[i]='P';
            }
            
        }
        
        for(int i=0;i<n;i++)
        {
            if(result[i]=='0')
            {
                if(sa>0)
                {
                    result[i]='S';
                    sa--;
                }
            else if(pa>0)
                {
                    result[i]='P';
                    pa--;
                }
                else if(ra>0)
                {
                    result[i]='R';
                    ra--;
                }
            }
        }
        cout<<"YES"<<endl;
       cout<<result<<endl;
        
    }
}
