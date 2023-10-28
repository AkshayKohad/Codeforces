#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll vertices,edges,node;
    cin>>vertices>>edges>>node;
    
    ll val = vertices-1 + (vertices-2)*(vertices-3)/2; 
    if((edges<vertices-1) || (edges > val))
    {
     cout<<"-1";        
     return 0;
    }
    
    for(ll i=1;i<=vertices;i++)
    {
        if(i==node)continue;
        
        if(i>node)
        cout<<node<<" "<<i<<endl;
        
        else
        cout<<i<<" "<<node<<endl;
        
        
    }
    
    edges -= vertices-1;
    
    ll idle_node;
    for(ll i=1;i<=vertices;i++)
    {
        if(i!=node)
        {
            idle_node = i;
            break;
        }
    }
    
    vector<int>other_nodes;
    
    for(int i=1;i<=vertices;i++)
    {
        if(i==idle_node || i==node)continue;
        
        other_nodes.push_back(i);
    }
    
    
   for(ll j=0;j<other_nodes.size();j++)
   {
       if(edges==0)break;
       
   
       
       for(ll k=j+1;k<other_nodes.size();k++)
       {
           if(edges==0)break;
           
           cout<<other_nodes[j]<<" "<<other_nodes[k]<<endl;
           edges--;
       }
       
       if(edges==0)break;
   }
    
    
}
