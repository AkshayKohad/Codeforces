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
        
        string a,b;
        
        cin>>a>>b;
        
        vector<int>char_a(26,0);
        vector<int>char_b(26,0);
        
        for(int i=0;i<n;i++)
        {
          char_a[a[i]-'a']++;
          char_b[b[i]-'a']++;
        }
        
        int flag=1;
        
        for(int i=0;i<26;i++)
        {
            if(char_a[i] < char_b[i])
            {
                flag=0;
                cout<<"No"<<endl;
                break;
            }
            
            char_a[i]-=char_b[i];
            
            if(char_a[i]%k!=0 || (i==25 && char_a[i]>0))
            {
                flag=0;
                cout<<"No"<<endl;
                break;
            }
            
            if(i<=24)
            char_a[i+1] += char_a[i];
        }
        
        if(flag==1)
        cout<<"Yes"<<endl;
        
    }
}
