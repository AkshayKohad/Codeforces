#include <bits/stdc++.h>
using namespace std;


int main() {
	
	int n;
	cin>>n;
	
	int m;
	cin>>m;
	
	vector<int>visited(n+1,0);
	
	for(int i=0;i<m;i++)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    visited[x]=1;
	    visited[y]=1;
	}
	
	int nd;
	for(int i=1;i<=n;i++)
	{
	    if(visited[i]==0)
	    {
	        nd=i;
	        break;
	    }
	}
	
	cout<<n-1<<endl;
	for(int i=1;i<=n;i++)
	{
	    if(i==nd) continue;
	    
	    cout<<i<<" "<<nd<<endl;
	    
	}
	
	
	return 0;
}
