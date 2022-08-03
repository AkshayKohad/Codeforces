#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        vector<int>a(6,0);
        
        int n;
        cin>>n;
        
        int total = 0;
        for(int i=1;i<6;i++)
        {
            int r = n%10;
            
            a[i] = r;
            n = n/10;
            
            if(r!=0) total++;
        }
        
        cout<<total<<endl;
        int m = 1;
        for(int i=1;i<6;i++)
        {
            if(a[i]!=0)
            {
                cout<<a[i]*m<<" ";
            }
            
            m *= 10;
        }
        
        cout<<endl;
    }
    
}
