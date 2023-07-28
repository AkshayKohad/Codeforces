#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n,m;
	cin>>n>>m;
	
	vector<long long int>a(n);
	vector<long long int>b(m);
	
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	
	for(int j=0;j<m;j++)
	{
	    cin>>b[j];
	}
	
	int i=0;
	int j=0;
	
	while(i<n && j<m)
	{
	    if(a[i]<b[j])
	    i++;
	    
	    else{
	        cout<<i<<" ";
	        j++;
	    }
	}
	
	while(j<m)
	{
	    cout<<i<<" ";
	    j++;
	}
	
	return 0;
}
