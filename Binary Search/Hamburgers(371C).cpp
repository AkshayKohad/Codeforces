#include <bits/stdc++.h>

using namespace std;

#define ll long long


bool check(ll dish_num,ll balance,ll bread_stock,ll sausage_stock,ll cheese_stock,ll bread_dish_req,ll cheese_dish_req,ll sausage_dish_req,ll bread_price,ll sausage_price,ll cheese_price)
{
    ll null_val = 0;
    ll total_req_bread = max(dish_num*bread_dish_req - bread_stock,null_val);
    
    ll total_req_sausage = max(dish_num*sausage_dish_req - sausage_stock,null_val);
    
    ll total_req_cheese = max(dish_num*cheese_dish_req - cheese_stock,null_val);
     
    ll resulting_price = total_req_bread*bread_price + total_req_sausage*sausage_price + total_req_cheese*cheese_price;
    
    if(balance >= resulting_price)
    return true;
    
    return false;
     
}

int main()
{
    string ingredient_list;
    
    cin>>ingredient_list;
    
    ll bread_stock,sausage_stock,cheese_stock;
    
    cin>>bread_stock>>sausage_stock>>cheese_stock;
    
    ll bread_price,sausage_price,cheese_price;
    
    cin>>bread_price>>sausage_price>>cheese_price;
    
    ll balance;
    
    cin>>balance;
    
    ll bread_dish_req = 0;
    ll cheese_dish_req = 0;
    ll sausage_dish_req = 0;
    
    for(int i=0;i<ingredient_list.length();i++)
    {
        if(ingredient_list[i]=='B')
        bread_dish_req++;
        
        else if(ingredient_list[i]=='C')
        cheese_dish_req++;
        
        else if(ingredient_list[i]=='S')
        sausage_dish_req++;
        
        
    }
    
    ll count_dish = INT_MAX;
    
    if(bread_dish_req>0)
    {
        count_dish = min(bread_stock/bread_dish_req, count_dish);
    }
    
    if(cheese_dish_req>0)
    {
        count_dish = min(cheese_stock/cheese_dish_req, count_dish);
    }
    
    if(sausage_dish_req>0)
    {
        count_dish = min(sausage_stock/sausage_dish_req, count_dish);
    }
    
    
    bread_stock -= count_dish*bread_dish_req;
    
    cheese_stock -= count_dish*cheese_dish_req;
     
    sausage_stock -= count_dish*sausage_dish_req;
    
    
    
    ll l = 0;
    
    ll r = max({bread_stock + balance/bread_price, cheese_stock + balance/cheese_price, sausage_stock + balance/sausage_price});
    
    ll ans = 0;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        
        if(check(mid,balance,bread_stock,sausage_stock,cheese_stock,bread_dish_req,cheese_dish_req,sausage_dish_req,bread_price,sausage_price,cheese_price))
        {
            ans = mid;
            l = mid+1;
        }
        
        else{
            r = mid-1;
        }
    }
    
   
    cout<<count_dish + ans;
}
