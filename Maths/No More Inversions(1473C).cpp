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
        
        map<int,int>mp;
        
        int cnt=n;
        
        int i=1;
        
        while(cnt>0 && i<=k)
        {
            mp[i]++;
            cnt--;
            i++;
        }
        
        i=k-1;
        
        while(cnt>0 && i>0)
        {
            mp[i]++;
            i--;
            cnt--;
        }
        
        int start = 1;
        int end = k;
        
        for(int i=1;i<=k;i++)
        {
            if(mp[i]>1)
            {
                cout<<end<<" ";
                end--;
            }
            else{
                cout<<start<<" ";
                start++;
            }
        }
        
        cout<<"\n";
        
    }
}
