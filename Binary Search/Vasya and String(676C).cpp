#include <bits/stdc++.h>
using namespace std;

bool check(int len,int k,string s)
{
    int cnt_a=0;
    int cnt_b=0;
    
    for(int i=0;i<len;i++)
    {
        if(s[i]=='a')
        cnt_a++;
        
        else
        cnt_b++;
    }
    
    int res_cnt = min(cnt_b,cnt_a);
    
    if(res_cnt<=k)
    return true;
    
    int i=0;
    int j=len;
    
    
    while(j<s.length())
    {
        if(s[i]=='a')
        {
            cnt_a--;
        }
        else{
            cnt_b--;
        }
        
        
        if(s[j]=='a')
        {
            cnt_a++;
        }
        else{
            cnt_b++;
        }
        
        res_cnt = min(cnt_a,cnt_b);
        
        if(res_cnt<=k)
        return true;
        
        j++;
        i++;
    }
    
    return false;
}

int main()
{
    int n,k;
    cin>>n>>k;
    
    string s;
    
    cin>>s;
    
    int l=1;
    int r=n;
    
    int ans=-1;
    
    while(l<=r)
    {
        int mid = (l+r)/2;
        
        if(check(mid,k,s))
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
