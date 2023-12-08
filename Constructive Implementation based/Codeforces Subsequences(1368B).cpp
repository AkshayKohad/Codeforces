#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
	
	ll k;
	cin>>k;
	
	vector<ll>count(10,1);
	
	ll res = 1;
	ll i=0;
	while(k>res)
	{
	   res = res/count[i];
	    
	    count[i]++;
	    res = res*count[i];
	    
	    i = (i+1)%10;
	}
	
	string res_str;
	string s = "codeforces";
	for(ll i=0;i<10;i++)
	{
	    char ch = s[i];
	    
	    for(ll j=0;j<count[i];j++)
	    {
	        res_str.push_back(ch);
	    }
	}
	
	cout<<res_str<<endl;
	
	return 0;
}
