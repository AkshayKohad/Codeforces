#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {

	long long int n;
cin>>n;
vector<int>a;
	while(n>0)
	{
       int val = n%10;
	   if(val==7)
	   a.push_back(1);

	   else
	   a.push_back(0);

	   n=n/10;
	}
	long long ans=0;
	for(int i=1;i<a.size();i++)
	{
		ans  = ans + pow(2,i);
	}

	for(int i=0;i<a.size();i++)
	{
		if(a[i]==1)
		ans = ans + pow(2,i);
	}

	ans = ans+1;
	cout<<ans;
	return 0;
}
