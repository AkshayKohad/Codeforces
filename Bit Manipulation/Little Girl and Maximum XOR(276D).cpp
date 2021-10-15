#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long int x,y;
    cin>>x>>y;
    long long int num = x^y;
    int msb=0;
    while(num!=0) {
        num=num>>1;
        msb++;
    }
    long long int result = 1;
    while(msb--) {
        result=result<<1;
    }
    cout<<result-1;

    return 0;
}
