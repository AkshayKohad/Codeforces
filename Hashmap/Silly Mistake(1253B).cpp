#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	int n;
	cin>>n;
	
	unordered_set<int>inside_office;
	unordered_set<int>outside_office;
	
	vector<int>result;
	int start = 0;
	for(int i=0;i<n;i++)
	{
	    int val;
	    cin>>val;
	   // cout<<val<<endl;
	    if(val<0)
	    {
	        if(inside_office.find(abs(val))==inside_office.end())
	        {
	            cout<<-1;
	            return 0;
	        }
	        else if((inside_office.find(abs(val))!=inside_office.end()) && ( outside_office.find(abs(val)) != outside_office.end()) ){
	            cout<<-1;
	            return 0;   
	        }
	        else{
	            outside_office.insert(abs(val));
	            if(inside_office.size()==outside_office.size())
	            {
	                 result.push_back(i+1-start);
	                start = i+1;
	                inside_office.clear();
	                outside_office.clear();
	                
	            }
	        }
	    }
	    else{
	        if(inside_office.find(val)==inside_office.end())
	        {
	            inside_office.insert(val);
	        }
	        else if( (inside_office.find(val) != inside_office.end()) && (outside_office.find(val) == outside_office.end()) ){
	            cout<<-1;
	            return 0;
	        }
	        else{
	            if(inside_office.size()!=outside_office.size())
	            {
	                cout<<-1;
	            return 0;
	            }
	            else{
	                result.push_back(i-start);
	                start = i;
	                inside_office.clear();
	                outside_office.clear();
	                
	                inside_office.insert(val);
	                
	                
	            }
	        }
	    }
	    
	}
	
	if(inside_office.size()!=outside_office.size())
	{
	    cout<<-1;
	    return 0;
	}
	else{
	    if(inside_office.size()!=0)
	    result.push_back(n-start);
	    cout<<result.size()<<endl;
	    for(int i=0;i<result.size();i++)
	    {
	        cout<<result[i]<<" ";
	    }
	}
	
	return 0;
}
