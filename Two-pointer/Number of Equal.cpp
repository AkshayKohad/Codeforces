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
	
	long long int res = 0;
	while(i<n && j<m)
	{
	    int k = i;
	    long long int count1 = 0;
	    while(k<n && a[i]==a[k])
	    {
	        count1++;
	        k++;
	    }
	    
	    int l=j;
	    
	    long long int count2 = 0;
	    while(l<m && b[j]==b[l])
	    {
	        count2++;
	        l++;
	    }
	    
	    if(a[i]==b[j])
	    {
	        res = res + count2*count1;
	        i=k;
	        j=l;
	    }
	    
	    else if(a[i]<b[j])
	    {
	        i=k;
	    }
	    
	    else{
	        j=l;
	    }
	    
	    
	}
	cout<<res<<endl;
	return 0;
}
