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
        
        vector<int>a(n);
        
        map<int,int>odd;
        map<int,int>even;
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
            if(i%2==0)
            {
              even[a[i]]++;  
            }
            else{
                odd[a[i]]++;
            }
        }
        
        sort(a.begin(),a.end());
        
        int flag = 1;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(even.find(a[i])==even.end())
                {
                    flag=0;
                    break;
                }
                else{
                    even[a[i]]--;
                    
                    if(even[a[i]]==0)
                    even.erase(a[i]);
                }
            }
            else{
                if(odd.find(a[i])==odd.end())
                {
                    flag=0;
                    break;
                }
                else{
                    odd[a[i]]--;
                    
                    if(odd[a[i]]==0)
                    odd.erase(a[i]);
                }
            }
        }
        
        
        if(flag)
        cout<<"YES"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
}
