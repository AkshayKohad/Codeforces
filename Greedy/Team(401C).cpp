#include <bits/stdc++.h>

using namespace std;

int main()
{
   int count_zeroes;
   int count_ones;
   
   cin>>count_zeroes>>count_ones;
   
   if((count_zeroes > count_ones+1) || (count_ones>count_zeroes*2+2))
   {
       cout<<-1;
       return 0;
   }
   
   bool prev_zero = false;
   
   if(count_zeroes>count_ones)
   {
       cout<<"0";
       count_zeroes--;
       prev_zero = true;
   }
   
   while((count_zeroes>0) && (count_ones>0))
   {
       if(count_ones==count_zeroes)
       {
           if(prev_zero)
           {
               cout<<"10";
               count_zeroes--;
               count_ones--;
               prev_zero=true;
           }
           else{
               cout<<"01";
               count_zeroes--;
               count_ones--;
               prev_zero=false;
           }
       }
       
       else{
           cout<<"110";
           count_zeroes--;
           count_ones = count_ones-2;
           prev_zero = true;
       }
   }
   
   if(count_ones>0)
   {
       if(count_ones==2)
       cout<<"11";
       
       else{
           cout<<"1";
       }
   }
}
