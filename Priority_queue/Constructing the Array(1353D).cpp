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
        
        vector<int>a(n,0);
        
        priority_queue<vector<int>>pq;
        
        pq.push({n,0,n-1});
        
        int cnt = 1;
        while(pq.size()>0 && cnt<=n)
        {
            vector<int>temp = pq.top();
            pq.pop();
            
            int l = temp[1]*(-1);
            int r = temp[2];
            
            int sz = temp[0];
            
            if(sz%2==0)
            {
                int division = (l+r-1)/2;
                a[division] = cnt;
                if(division-1>=l)
                {
                    int w = division-1;
                    pq.push({w-l+1,-l,w});
                   
                }
                
                if(division+1<=r)
                {
                     int w = division+1;
                    pq.push({r-w+1,-w,r});
                }
            }
            else{
                int division = (l+r)/2;
                a[division] = cnt;
                if(division-1>=l)
                {
                    int w = division-1;
                    pq.push({w-l+1,-l,w});
                   
                }
                
                if(division+1<=r)
                {
                     int w = division+1;
                    pq.push({r-w+1,-w,r});
                }
            }
            
            cnt++;
        }
        
        
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        
        cout<<endl;
    }
}
