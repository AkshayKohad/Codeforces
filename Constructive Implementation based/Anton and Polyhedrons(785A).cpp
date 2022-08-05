#include <bits/stdc++.h>
using namespace std;

int main() {
	
	unordered_map<char,int>mp;
	
	mp['I'] = 20;
	mp['C'] = 6;
	mp['O'] = 8;
	mp['D'] = 12;
	mp['T'] = 4;
	
	int n;
	cin>>n;
	int ans = 0;
	for(int i=0;i<n;i++)
	{
	    string s;
	    cin>>s;
	    
	    ans += mp[s[0]];
	    
	    
	}
	
	cout<<ans;
	return 0;
}
