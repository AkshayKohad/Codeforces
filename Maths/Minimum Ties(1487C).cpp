#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        
        int total_matches = n*(n-1);
        total_matches = total_matches/2;
        
        int total_points = total_matches*3;
        
        int rem = total_points%n;
        
        int val = total_points/n;
        
        val = val/3;
        
      
        
        for(int i=0;i<n;i++)
        {
            int cnt_win = val;
            int cnt_tie = (rem==0) ? 0 : 1;
            for(int j=i+1;j<n;j++)
            {
                if(cnt_win>0)
                {
                    cout<<"1 ";
                    cnt_win--;
                }
                else if(cnt_tie>0)
                {
                    cout<<"0 ";
                    cnt_tie--;
                }
                else{
                    cout<<"-1 ";
                }
            }
        }
        
        cout<<endl;
    }
}
