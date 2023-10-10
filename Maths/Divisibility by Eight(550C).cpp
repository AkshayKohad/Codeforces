#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    
    cin>>s;
    
    int n = s.length();
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='8' || s[i]=='0')
        {
            cout<<"YES"<<endl;
            cout<<s[i]-'0'<<endl;
            return 0;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int a = s[i]-'0';
                int b = s[j]-'0';
                int c = s[k]-'0';
                
                int res = a*100 + b*10 + c;
                
                if(res%8==0)
                {
                  cout<<"YES"<<endl;
                  cout<<res<<endl;
                  return 0;
                }
            }
            
            int a = s[i]-'0';
                int b = s[j]-'0';
              
                
                int res = a*10 + b;
                
                if(res%8==0)
                {
                  cout<<"YES"<<endl;
                  cout<<res<<endl;
                  return 0;
                }
            
        }
    }
    
    cout<<"NO"<<endl;
    
}
