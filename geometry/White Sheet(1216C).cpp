//Approach 1

#include <bits/stdc++.h>
using namespace std;

#define ll long long 



ll overlapped_area_of_white_black(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4 )
{
    if(x1>x4 || y2<y3 || x2<x3 || y1>y4)
    return 0;
    
    int a1 = max(x1,x3);
    int b1 = max(y1,y3);
    int a2 = min(x2,x4);
    int b2 = min(y2,y4);
    
   
    ll result = (ll)(a2-a1)*(b2-b1);
    
    return result;
    
}

ll overlapped_area_of_blacks(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int wx1,int wy1,int wx2,int wy2)
{
    if(x1>x4 || y2<y3 || x2<x3 || y1>y4)
    return 0;
    
    int a1 = max(x1,x3);
    int b1 = max(y1,y3);
    int a2 = min(x2,x4);
    int b2 = min(y2,y4);
    
    ll result = overlapped_area_of_white_black(wx1,wy1,wx2,wy2,a1,b1,a2,b2);
    return result;
}    

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll x1,y1,x2,y2;
	
	cin>>x1>>y1>>x2>>y2;
	
	
	
	
	ll x3,y3,x4,y4;
	cin>>x3>>y3>>x4>>y4;
	
	
	ll x5,y5,x6,y6;
	
	cin>>x5>>y5>>x6>>y6;
	
	ll white_area = (x2-x1)*(y2-y1);
	ll black1_area = (x4-x3)*(y4-y3);
	ll black2_area = (x6-x5)*(y6-y5);
	
	ll remaining_area = white_area - overlapped_area_of_white_black(x1,y1,x2,y2,x3,y3,x4,y4) - overlapped_area_of_white_black(x1,y1,x2,y2,x5,y5,x6,y6) + overlapped_area_of_blacks(x3,y3,x4,y4,x5,y5,x6,y6,x1,y1,x2,y2);
	
	
     if(remaining_area == 0)
     cout<<"NO";
     
     else
     cout<<"YES";
     
     
}


//Approach 2

#include <iostream>

using namespace std;


struct Rect{
	long long x1;
	long long y1;
	long long x2;
	long long y2;

	long long area(){
		return (x2-x1)*(y2-y1);
	}


};

void create_edge(Rect& rect){

	cin>>rect.x1>>rect.y1>>rect.x2>>rect.y2;

}

Rect intersection(Rect r1, Rect r2){

	long long a1 = max(r1.x1, r2.x1);
	long long b1 = max(r1.y1, r2.y1);
	long long a2 = min(r1.x2, r2.x2);
	long long b2 = min(r1.y2, r2.y2);

	Rect inter_rect;

	if(a2>a1 && b2>b1){
		inter_rect.x1 = a1;
		inter_rect.y1 = b1;
		inter_rect.x2 = a2;
		inter_rect.y2 = b2;
	}
	else
	{
		inter_rect.x1=0;
		inter_rect.y1=0;
		inter_rect.x2=0;
		inter_rect.y2=0;
	}

	return inter_rect;


}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	Rect w;
	Rect b1;
	Rect b2;

	create_edge(w);
	create_edge(b1);
	create_edge(b2);

	Rect w_b1 = intersection(w, b1);
	Rect w_b2 = intersection(w, b2);
	Rect w_b1_b2 = intersection(w_b1, b2);

	long long w_area = w.area();
	long long w_b1_area = w_b1.area();
	long long w_b2_area = w_b2.area();
	long long w_b1_b2_area = w_b1_b2.area();

	long long area_remaining = w_area - w_b1_area - w_b2_area + w_b1_b2_area;

	cout<<(area_remaining>0 ? "YES" : "NO");






	return 0;
}

