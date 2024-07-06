#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    

    vector<int>a(n+1,0);
    
    int flag = 1;
    
    vector<pair<int,int>>t_zero_pair;
    for(int i=0;i<m;i++)
    {
        int t,l,r;
        cin>>t>>l>>r;
        
        if(t==1)
        {
            for(int j=l+1;j<=r;j++)
            {
                a[j]+=1;
            }
        }
        else{
            t_zero_pair.push_back({l,r});
        }
       
    }
    
    for(int i=0;i<t_zero_pair.size();i++)
    {
        int start = t_zero_pair[i].first;
        int end = t_zero_pair[i].second;
        
        int flag=0;
        
        for(int j=start+1;j<=end;j++)
        {
            if(a[j]==0)
            {
                flag=1;
                break;
            }
        }
        
        if(!flag)
        {
            cout<<"NO";
            return 0;
        }
    }
    
    
    cout<<"YES\n";
    int num = 1001;
    
    cout<<num<<" ";
    
    for(int i=2;i<=n;i++)
    {
        if(a[i]==0)
        {
            num = num-1;
            cout<<num<<" ";
        }
        else{
            num = num+1;
            cout<<num<<" ";
        }
    }
    
}
