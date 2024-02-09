#include <bits/stdc++.h>
using namespace std;

bool anagram(string &a,string &b)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    for(int i=0;i<a.length();i++)
    {
        if(a[i]!=b[i]) return false;
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
        
        string a,b;
        
        cin>>a>>b;
        
        if(anagram(a,b))
        {
            cout<<"Yes"<<endl;
            continue;
        }
        
        vector<int>char_a(26,0);
        vector<int>char_b(26,0);
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int i=0;
        
        while(i<n)
        {
            char_a[a[i]-'a']++;
            char_b[b[i]-'a']++;
            i++;
        }
        
        i=0;
        
        while(i<n)
        {
            if(char_b[a[i]-'a']>0 && char_a[a[i]-'a']>0)
            {
                int cnt = min(char_b[a[i]-'a'],char_a[a[i]-'a']);
                char_a[a[i]-'a'] -= cnt;
                char_b[a[i]-'a'] -= cnt;
                
            }
            i++;
        }
        
        int flag = 1;
        
        i=0;
        
        while(i<n)
        {
            if(char_a[a[i]-'a']==0)
            {
                i++;
                continue;
                
            }
            
            if(char_b[a[i]-'a']>0)
            {
                char_a[a[i]-'a']--;
                char_b[a[i]-'a']--;
                i++;
            }
            
            else{
                int index=-1;
                for(int j=(a[i]-'a')+1;j<26;j++)
                {
                    if(char_a[a[i]-'a'] > 0 && char_b[j] > 0  && char_a[a[i]-'a']%k==0 && char_b[j]%k==0)
                    {
                        index = j;
                        break;
                    }
                }
                
                // cout<<a[i]<<" "<<index<<endl;
                
                if(index==-1)
                {
                    cout<<"No"<<endl;
                    flag=0;
                    break;
                }
                
                char_b[index] -= k;
                char_a[a[i]-'a'] -= k;
                
                
                i=i+k;
            }
            
            
        }
        
        if(flag==1)
        {
            cout<<"Yes"<<endl;
        }
        
        
    }
}
