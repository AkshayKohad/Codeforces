#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    
    vector<int>res(n+1,0);
    set<int>alive;
    
    for(int i=1;i<=n;i++)
    alive.insert(i);
    
    
    vector<int>x_record;
    while(m--)
    {
        int l,r,x;
        cin>>l>>r>>x;
        
        x_record.push_back(x);
        
        set<int>::iterator it = alive.lower_bound(l);
        vector<int> Erase_knights;        
        while(it != alive.end()){
            int cur = *it;            
            if(cur > r)
                break;                
             
            if(x!=cur) 
            {
            Erase_knights.push_back(cur); 
            res[cur] = x;
            }
            it++;
        }

        for (int j = 0; j < Erase_knights.size(); j++)
            alive.erase(Erase_knights[j]);
        
        
    }
    
    
    
    for(int i=1;i<=n;i++)
    {
       
        cout<<res[i]<<" ";
    }
    
}
