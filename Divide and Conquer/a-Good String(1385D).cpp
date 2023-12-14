#include <bits/stdc++.h>
using namespace std;

int count(int start,int end,string &s,char c)
{
    int cnt = 0;
    for(int i=start;i<=end;i++)
    {
        if(s[i]!=c)
        cnt++;
    }
    
    return cnt;
}

int solve(int i,int j,string &s,char c)
{
    if(i>j)
    return 0;
    
    if(i==j)
    {
        if(s[i]==c)
        return 0;
        
        return 1;
    }
    
    int mid = (i+j)/2;
    
    return min(count(i,mid,s,c)+solve(mid+1,j,s,c+1),count(mid+1,j,s,c)+solve(i,mid,s,c+1));
    
    
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        string s;
         cin>>s;
        
        // for(int i=0;i<n;i++)
        // s.push_back('a');
        
       cout<<solve(0,n-1,s,'a')<<endl;
        
        
    }
}
