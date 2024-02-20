#include <bits/stdc++.h>
using namespace std;


void solve() {
	
}

int main()
{
	
	int t;
    cin>>t;
	while(t--)
	{
    	int n, k;
    	cin>>n>>k;
    	
    	if (n == 4 && k == 3) {
    		cout<<"-1"<<endl;
    		continue;
    	}
    	if (k == 0) {
    		for (int x = 0; x < n / 2; x++) {
    		cout<<x<<" "<<n-1-x<<endl;
    		}
    	} else if (k == n - 1) {
    	    cout<<"0 "<<n/2-2<<endl;
    		cout<<n/2-1<<" "<<n-1<<endl;
    		cout<<n/2<<" "<<n/2+1<<endl;
    		
    		for (int x = 1; x < n / 2 - 2; x++) {
    		    cout<<x<<" "<<n-1-x<<endl;
    		}
    		
    	} else {
    	    cout<<"0 "<<n-1-k<<endl;
    	    cout<<k<<" "<<n-1<<endl;
    		for (int x = 1; x < n / 2; x++) {
    			if (x == k || x == n - 1 - k) continue;
    			cout<<x<<" "<<n-1-x<<endl;
    		}
    	}
	}

	return 0;
}
