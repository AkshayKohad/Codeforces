#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		if(n%2){
			cout<<n<<"\n";
			
			int val = n;
			int val2 = n-1;
			int val3 = 1;
			int val4 = 3;

			int i=0;
			int cnt_val=2;
	
			while(i<n-4){
				if(cnt_val == val || cnt_val == val2 || cnt_val == val3 || cnt_val == val4){
					cnt_val++;
					continue;
				}

				cout<<cnt_val<<" ";
				cnt_val++;
				i++;
			}

			cout<<val4<<" "<<val3<<" "<<val2<<" "<<val<<"\n";
		}else{
			int msb = 0;
			
			int max_val = n;

			while(max_val>0){
				max_val = max_val/2;
				msb++;
			}
			cout<<pow(2,msb)-1<<"\n";

			int val = pow(2,msb-1);
			vector<int>res;
			vector<int>status(n+1,0);
			while(val>0 && msb>0){
			    
			    if(status[val]==0)
			    {
				    res.push_back(val);
				    status[val]=1;
			    }
	            if(val-1==0)break;
	            
	            if(status[val-1]==0){
	                res.push_back(val-1);
				    status[val-1]=1;
	            }
	            
				
				msb--;
				val = pow(2,msb-1);
			}
			
			res.push_back(5);
			status[5]=1;
				
			int cnt_val = 1;
			
			while(cnt_val<=n){
				if(status[cnt_val]!=1){
					cout<<cnt_val<<" ";
				} 
				cnt_val++;
			}
			
			for(int i=res.size()-1;i>=0;i--){
				cout<<res[i]<<" ";
			}

			cout<<"\n";
			
		}	
		
	}

}
