#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>prime_number = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    
    int sz = prime_number.size();
    
    vector<int>cnt(sz,0);
    
    
    for(int i=0;i<sz;i++)
    {
        cout<<prime_number[i]<<endl;
        string s;
        cin>>s;
        
        if(s=="yes")
        {
            cnt[i]++;
        }
       
    }
    
    for(int i=0;i<4;i++)
    {
        cout<<prime_number[i]*prime_number[i]<<endl;
        string s;
        cin>>s;
        
        if(s=="yes")
        {
            cnt[i]++;
        }
    }
    
    int res = 0;
    
    for(int i=0;i<sz;i++)
    {
        res += cnt[i];
    }
    
    if(res>1)
    {
        cout<<"composite"<<endl;
    }
    else{
        cout<<"prime"<<endl;
    }
    
}
