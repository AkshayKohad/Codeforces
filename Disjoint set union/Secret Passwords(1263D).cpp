#include<bits/stdc++.h>
using namespace std;
 
 
int find(int i,vector<int>&parent)
{
    if(parent[i]==-1)
    return i;
    
    return parent[i] = find(parent[i],parent);
}
 
 
void union_set(int x,int y,vector<int>&parent,vector<int>&rank)
{
    int s1 = find(x,parent);
    int s2 = find(y,parent);
    
    if(s1!=s2)
    {
        if(rank[s1]>rank[s2])
        {
            rank[s1] += rank[s2];
            
            parent[s2] = s1;
        }
        
        else{
             rank[s2] += rank[s1];
            
            parent[s1] = s2;
        }
    }
}
 
// Driver Program to test above functions
int main()
{
   int n;
   cin>>n;
   
   unordered_map<int,int>m;
   vector<int>parent(n,-1);
   vector<int>rank(n,1);
   
   for(int i=0;i<n;i++)
   {
       string a;
       cin>>a;
       
       for(int j=0;j<a.length();j++)
       {
           if(m.find(a[j])!=m.end())
           {
               int node = m[a[j]];
               
               if(node==i)
               continue;
               
               if(parent[node]!=parent[i] || (parent[i]==parent[node] && parent[i]==-1))
               {
                   union_set(i,node,parent,rank);
               }
           }
           
           else{
               m[a[j]] = i;
           }
       }
       
   }
   
//   for(int i=0;i<n;i++)
//   {
//       cout<<parent[i]<<" ";
//   }
//   cout<<endl;
   
//   for(int i=0;i<n;i++)
//   {
//       cout<<rank[i]<<" ";
//   }
   
//   cout<<endl;
   int res=0;
   
   for(int i=0;i<n;i++)
   {
       if(parent[i]==-1)
       res++;
   }
   
   cout<<res;
   
}
