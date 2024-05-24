#include <bits/stdc++.h>
using namespace std;

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
        
        int position_zero=-1;
        
        for(int i=1;i<=n;i++)
        {
            if(s[i-1]=='0')
            {
                position_zero = i;
                break;
            }
            
        }
        
        if(position_zero == -1)
        {
            cout<<"1 "<<n-1<<" 2 "<<n<<endl;
        }
        else{
           
           int sz_end = n-position_zero+1;
           int sz_start = position_zero;
           
            if(sz_end<=sz_start)
            {
                cout<<"1 "<<position_zero<<" 1 "<<position_zero-1<<endl;
            }
            else
            {
                cout<<position_zero<<" "<<n<<" "<<position_zero+1<<" "<<n<<endl;
            }
        }
    }
}
