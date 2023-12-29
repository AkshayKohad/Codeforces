#include <bits/stdc++.h>
using namespace std;


bool check(int val,int n,int k,string s)
{
    vector<int>freq(26,0);
    
    for(int i=0;i<n;i++)
    {
        freq[s[i]-'a']++;
    }
    
    
    while(k--)
    {
        int cnt = val;
        int index = -1;
        for(int i=0;i<26;i++)
        {
            if(freq[i]==0)continue;
            
            if(freq[i]%2==0)
            {
                if(cnt%2==0)
                {
                    int mini = min(freq[i],cnt);
                    
                    cnt = cnt - mini;
                    freq[i] = freq[i]-mini;
                    
                    if(freq[i]>0)
                    {
                        if(index==-1 || freq[index]<freq[i])
                        index=i;
                    }
                    
                }
                else{
                    
                    int mini = min(freq[i],max(cnt-1,0));
                    
                    cnt = cnt - mini;
                    freq[i] = freq[i]-mini;
                    
                    if(freq[i]>0)
                    {
                        if(index==-1 || freq[index]<freq[i])
                        index=i;
                    }
                }
            }
            else{
                if(cnt%2==0)
                {
                    int mini = min(freq[i]-1,cnt);
                    
                    cnt = cnt - mini;
                    freq[i] = freq[i]-mini;
                    
                    if(freq[i]>0)
                    {
                        if(index==-1 || freq[index]<freq[i])
                        index=i;
                    }
                    
                }
                else{
                    
                    int mini = min(freq[i],cnt);
                    
                    cnt = cnt - mini;
                    freq[i] = freq[i]-mini;
                    
                    if(freq[i]>0)
                    {
                        if(index==-1 || freq[index]<freq[i])
                        index=i;
                    }
                }   
            }
            
            
        }
        
        if(cnt>0)
        {
            if(index==-1 || freq[index]<cnt)
            {
                return false;
            }
            else{
                int mini = min(freq[index],cnt);
                    
                    cnt = cnt - mini;
                    freq[index] = freq[index]-mini;
            }
        }
    }
    
    return true;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        string s;
        cin>>s;
        
        int l=1;
        int r=n;
        
        int ans = -1;
        
        while(l<=r)
        {
            int mid = (l+r)/2;
            
            if(check(mid,n,k,s))
            {
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        
        cout<<ans<<endl;
    }
}
