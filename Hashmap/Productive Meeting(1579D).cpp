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
        
        set<pair<int,int>>s;
        
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert({a[i],i});
        }
        
       
       vector<pair<int,int>>res;
       
       while(s.size()>1)
       {
           auto it_min = s.begin();
           auto it_max = s.rbegin();
           
           pair<int,int>mini = {it_min->first,it_min->second};
           
           pair<int,int>maxi = {it_max->first,it_max->second};
           
           
           if(mini.first==0 && maxi.first==0)
           {
                s.erase(mini);
                s.erase(maxi);
                continue;
           }
           
           if(mini.first==0)
           {
                s.erase(mini);
                continue;
           }
           
           if(maxi.first==0)
           {
                s.erase(maxi);
                continue;
           }
           
           
           res.push_back({it_min->second,it_max->second});
           
          
         
           
           
        //   cout<<mini.first<<" "<<mini.second<<endl;
           
        //   cout<<maxi.first<<" "<<maxi.second<<endl;
           
           s.erase(mini);
           s.erase(maxi);
           
           
           mini.first--;
           maxi.first--;
           
           
            if(mini.first>0)
            s.insert(mini);
            
            if(maxi.first>0)
            s.insert(maxi);
              
           
       }
        
       
        cout<<res.size()<<endl;
        
        for(int i=0;i<res.size();i++)
        {
            cout<<min(res[i].first,res[i].second)+1<<" "<<max(res[i].first,res[i].second)+1<<endl;
        }
        
    }
}
