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
        
        int cnt_d = 0;
        int cnt_k = 0;
        
        map<pair<int,int>,int>mp;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='K')
            cnt_k++;
            
            else if(s[i]=='D')
            cnt_d++;
            
            
            int temp_k = cnt_k;
            int temp_d = cnt_d;
            
            if(temp_k==0)
            {
                temp_d=1;
            }
            else if(temp_d==0)
            {
                temp_k=1;
            }
            else{
                int max_divi = __gcd(temp_k,temp_d);
                
                temp_k = temp_k/max_divi;
                temp_d = temp_d/max_divi;
                
            }
            
            mp[{temp_d,temp_k}]++;
            
            cout<<mp[{temp_d,temp_k}]<<" ";
        }
        
        cout<<endl;
    }
}
