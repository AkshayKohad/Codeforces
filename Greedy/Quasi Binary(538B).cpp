#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int>result;
    while(n!=0)
    {
        int val = n;
        
        string k;
        while(val!=0)
        {
            int rem = val%10;
            
            if(rem>0)
            {
                k.push_back('1');
            }
            else{
                
               k.push_back('0');
            }
            
            val = val/10;
        }
        
        reverse(k.begin(),k.end());
        
        int res = stoi(k);
        result.push_back(res);
        n = n-res;
    }
    
    cout<<result.size()<<endl;
    for(int i=0;i<result.size();i++)
    {
       cout<<result[i]<<" ";   
    }
    cout<<endl;
}
