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
        
        stack<int>one;
        stack<int>zero;
        
        int component = 0;
        
        vector<int>result(n);
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(one.empty()==true)
                {
                    zero.push(component+1);
                    component++;
                    result[i] = component;
                }
                else{
                    zero.push(one.top());
                    result[i] = one.top(); 
                    one.pop();
                }
            }
            else{
                if(zero.empty()==true)
                {
                    one.push(component+1);
                    component++;
                    result[i] = component;
                }
                else{
                    one.push(zero.top());
                    result[i] = zero.top(); 
                    zero.pop();
                }
            }
        }
        
        cout<<component<<endl;
        
        for(int i=0;i<n;i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
}
