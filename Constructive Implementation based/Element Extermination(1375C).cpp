The answer is YES iff a1<an.


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
        
        int first = -1;
        int last = -1;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            if(i==0)
            {
                first = val; 
            }
            if(i==n-1)
            {
                last = val;
            }
        }
        
        if(first<last)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
