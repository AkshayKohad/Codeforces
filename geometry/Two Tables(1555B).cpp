#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    
    ll t;
    cin>>t;
    
    while(t--)
    {
        double width_room,height_room;
        cin>>width_room>>height_room;
        
        double x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        
        double width_table,height_table;
        
        cin>>width_table>>height_table;
        
        pair<double,double>lower_space;
        pair<double,double>upper_space;
        pair<double,double>left_space;
        pair<double,double>right_space;
        
        lower_space.first = width_room;
        lower_space.second = y1;
        
        upper_space.first = width_room;
        upper_space.second = height_room-y2;
        
        left_space.first = x1;
        left_space.second = height_room;
        
        right_space.first = width_room-x2;
        right_space.second = height_room;
        
        
        double result_lower,result_upper,result_left,result_right;
        int flag = 0; 
        double result;
        int not_possible = 0;
       
       double x = lower_space.first - width_table;
       double y = lower_space.second - height_table;
       
       if(y>=0)
       {
           result_lower = 0.0;
           result = 0.0;
           flag = 1;
       }
       
       else{
          
          y = abs(y);
          
          if(y+y2<=height_room)
          {
              
              result_lower = y;
              if(flag==0)
              {
              result = result_lower;
              flag = 1;
              }
              else{
                  result = min(result,result_lower);
              }
              
              
          }
          else{
              not_possible++;
          }
       }
        
      
      x = upper_space.first - width_table;
      y = upper_space.second - height_table;
      
       if(y>=0)
       {
           result_upper = 0.0;
           result = 0.0;
           flag = 1;
       }
       
       else{
          
          y = abs(y);
          
          if(y1-y>=0)
          {
              
              result_upper = y;
              if(flag==0)
              {
              result = result_upper;
              flag = 1;
              }
              else{
                  result = min(result,result_upper);
              }
          }
          else{
              not_possible++;
          }
       }
        
        
      x = left_space.first - width_table;
      y = left_space.second - height_table;
      
       if(x>=0)
       {
           result_left = 0.0;
           result = 0.0;
           flag = 1;
       }
       
       else{
          
          x = abs(x);
          
          if(x2+x<=width_room)
          {
              
              result_left = x;
               if(flag==0)
              {
              result = result_left;
              flag = 1;
              }
              else{
                  result = min(result,result_left);
              }
          }
          else{
              not_possible++;
          }
       }
       
       
               
      x = right_space.first - width_table;
      y = right_space.second - height_table;
      
       if(x>=0)
       {
           result_right = 0.0;
           result = 0.0;
           flag = 1;
       }
       
       else{
          
          x = abs(x);
          
          if(x1-x>=0)
          {
              
              result_right = x;
              if(flag==0)
              {
              result = result_right;
              flag = 1;
              }
              else{
                  result = min(result,result_right);
              }
          }
          else{
              not_possible++;
          }
       }
       
       if(not_possible==4)
       cout<<-1<<endl;
       
       else{
           cout << fixed << setprecision(6)<<result<<endl;
       }
        
    }
	return 0;
}
