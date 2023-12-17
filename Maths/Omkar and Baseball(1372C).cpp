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
        
        int cnt = 0;
        
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            
            if(val==i+1)
            {
                cnt++;
            }
            else{
                a.push_back(i);
            }
        }
        
        if(cnt==n)
        {
            cout<<"0"<<endl;
        }
        else if(cnt==0){
           cout<<"1"<<endl;
        }
        else{
            int f = a[0];
            int flag = 0;
            for(int i=0;i<a.size();i++)
            {
                if(f!=a[i])
                {
                   flag=1;
                   break;
                }
                f++;
            }
            if(flag)
            cout<<"2"<<endl;
            
            else
            cout<<"1"<<endl;
        }
    }
}
