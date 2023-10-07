#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    vector<int>res;
    res.push_back(-1);
    
    int n = s.length();
    
    int res_max = 0;
    int freq = 0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            res.push_back(i);
        }
        else
        {
            if(res.back()!=-1 && s[res.back()]=='(')
            {
                res.pop_back();
                
                if(res_max<i-res.back())
                {
                    res_max = i-res.back();
                    freq = 1;
                }
                else if(res_max== i-res.back())
                {
                    freq++;
                }
            }
            else{
                res.push_back(i);
            }
        }
        
       
        
    }
    
    if(res_max==0)
    {
        cout<<"0 1";
        return 0;
    }
    
     cout<<res_max<<" "<<freq;
}
