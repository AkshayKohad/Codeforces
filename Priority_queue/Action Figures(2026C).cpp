#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		string s;
		cin>>s;

		priority_queue<int>pq;
	
		pq.push(n);
		
		long long result = 0;
		for(int i=n-2;i>=0;i--){
			if(s[i] == '0'){
				if(pq.size()>0){
					pq.pop();
				}
				result += (i+1);
			}else{
				pq.push(i+1);
			}
		
		}

		vector<int>remaining;

		while(pq.size()>0){
			remaining.push_back(pq.top());
			pq.pop();
		}

		sort(remaining.begin(),remaining.end());

		int i=0;
		int j=remaining.size()-1;

		while(i<j){
			result += remaining[i];
			i++;
			j--;
		}
		if(i==j)result += remaining[i];

		cout<<result<<"\n";
	}
}
