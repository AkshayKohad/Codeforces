// Approach 1
#include<bits/stdc++.h>
using namespace std;

int n,m;

int arr[1000000];
int seg[2000000];



void update(int nd,int i,int l,int r,int val)
{
    if(i<l || i>r)
    return;
    
    if(l==r)
    seg[nd] = val;
    
    
    else{
        int mid = (l+r)/2;
        
        update(2*nd,i,l,mid,val);
        update(2*nd+1,i,mid+1,r,val);
        
        int times = log2(r-l+1);
        
        if(times&1)
        {
            seg[nd] = seg[2*nd] | seg[2*nd+1];
        }
        
        else{
             seg[nd] = seg[2*nd] ^ seg[2*nd+1];
        }
    }
}



void built(int nd,int l,int r)
{
    if(l==r)
    {
        seg[nd] = arr[l];
        return;
    }
    
    int mid = (l+r)/2;
    
    built(2*nd,l,mid);
    built(2*nd+1,mid+1,r);
    
    int times = log2(r-l+1);
    
    if(times&1)
    {
        seg[nd] = seg[nd*2] | seg[nd*2 + 1];
    }
    
    else{
        seg[nd] = seg[nd*2] ^ seg[nd*2 + 1];
    }
    
    
}


int main()
{

 cin>>n>>m;
 n = pow(2,n);
 
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 
  built(1,0,n-1);
 
 while(m--)
 {
     int id,val;
     cin>>id>>val;
     
     id--;
     
     update(1,id,0,n-1,val);
     
     cout<<seg[1]<<endl;
     
     
 }
	return 0;
}



// Approach 2

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void build_tree(ll s,ll e,ll index,vector<ll>&segment_tree,vector<ll>&a,ll level,ll &val)
{
    if(s==e)
    {
        segment_tree[index] = a[s];
        return;
    }
    
    ll mid = (s+e)/2;
    
     build_tree(s,mid,2*index,segment_tree,a,level+1,val);
    
     build_tree(mid+1,e,2*index+1,segment_tree,a,level+1,val);
     
     ll left = segment_tree[2*index];
     ll right = segment_tree[2*index+1];
    
    if(level%2==val)
    {
        segment_tree[index] = left|right;
    }
    else{
        segment_tree[index] = left^right;
    }
    
    return;
    
}

void update(ll s,ll e,ll index,vector<ll>&segment_tree,ll &b,ll i,ll level,ll &val)
{
    if(i>e || i<s)
    return;
    
    if(s==e)
    {
        segment_tree[index] = b;
      //  cout<<level<<endl;
        return;
    }
    
    ll mid = (s+e)/2;
    
     update(s,mid,2*index,segment_tree,b,i,level+1,val);
    
     update(mid+1,e,2*index+1,segment_tree,b,i,level+1,val);
      
     
     ll left = segment_tree[2*index];
     ll right = segment_tree[2*index+1];
    
    if(level%2==val)
    {
        segment_tree[index] = left|right;
    }
    else{
        segment_tree[index] = left^right;
    } 
     
      
}
int main()
{
    ll n;
    cin>>n;
    
    ll m;
    cin>>m;
    
    ll res_size = pow(2,n);
    
    vector<ll>a(res_size);
    
    for(ll i=0;i<res_size;i++)
    cin>>a[i];
    
    ll val = 0;
    if(n%2==0)
    {
        val=1;
    }
    vector<ll>segment_tree(4*res_size+1,0);
    
    build_tree(0,res_size-1,1,segment_tree,a,0,val);
    
    while(m--)
    {
        ll p,b;
        cin>>p>>b;
        
        a[p-1] = b;
        
        update(0,res_size-1,1,segment_tree,b,p-1,0,val);
        
        cout<<segment_tree[1]<<endl;
    }
}
