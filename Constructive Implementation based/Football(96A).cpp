#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int n = s.length();
    int i=0;
    
    while(i<n)
    {
        int cnt=0;
        
        int j=i;
        
        while(j<n && s[i]==s[j])
        {
            cnt++;
            j++;
        }
        
        if(cnt>=7)
        {
            cout<<"YES";
            return 0;
        }
        i=j;
    }
    
    cout<<"NO";
    return 0;
}
