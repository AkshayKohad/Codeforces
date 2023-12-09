#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        // if(n==k)
        // {
        //     cout<<n<<endl;
        //     for(int i=0;i<n;i++)
        //     {
        //         cout<<a[i]<<" ";
        //     }
        //     cout<<endl;
        //     continue;
            
        // }
        
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        
        if(mp.size()>k)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<int>res;
        
        for(auto k:mp)
        {
            res.push_back(k.first);
        }
        
        int j=res.size();
        int index = 0;
        while(j<k)
        {
            res.push_back(a[index]);
            index++;
            j++;
        }
        
        j=0;
        int i=index;
        while(i<n)
        {
            if(res[j]==a[i])
            {
                res.push_back(a[i]);
                j++;
                i++;
            }
            else{
                res.push_back(res[j]);
                j++;
            }
        }
        
        cout<<res.size()<<endl;
        
        for(int i=0;i<res.size();i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
        
    }
}
