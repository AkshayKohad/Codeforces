Your class teacher wrote N integers on the board. One of your classmates was being mischievous, he replaced the N integers with all possible subset sums of the array when the teacher was not in the class. 
Suppose that the integers on the board were [2,1] then the subsets will be: {}, {2}, {1}, {2,1} and the subset sums will be: {0,2,1,3}. 
Your task is to rebuild the original array given by your teacher.

Input Format
The first line of the input contains one integer T - the number of test cases. Then T test cases follow.
The first line of each test case contains one integer N - the number of elements in the initial array.
The second line of each test case contains 2N space-separated integers, the new values on the board.

Output Format
For each test case, print N space-separated integers in non-decreasing order.
It is guaranteed that a solution always exists.

Constraints
1 ≤ T ≤ 50
1 ≤ N ≤ 15
0 ≤ Ai ≤ 1015

Sample Input 1
3
2
0 1 2 3
3
0 1 3 4 5 6 8 9
3
0 1 1 1 2 2 2 3
Sample Output 1
1 2 
1 3 5 
1 1 1





#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,s,f) for(i=s;i<f;i++)
#define print(v) for(auto &z:v) cout<<z<<' ';cout<<'\n'
#define db cout<<"db: "
#define pb push_back
#define pii pair<int,int>
#define F first
#define S second
#define B begin()
#define E end()
#define all(v) v.B,v.E
#define sz(v) (int)((v).size())
#define vi vector<int>
#define vii vector<pair<int,int>>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define clk1 clock_t start_time=clock()
#define clk2 cout<<(clock()-start_time)/(double)CLOCKS_PER_SEC
#define clean(arr) memset(arr,0,sizeof(arr))
#define mod 1000000007
#define mod2 998244353
#define space 100005
#define endl '\n'
//<<fixed << setprecision(9)


int main()
{
    boost;

    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        multiset<ll>all_num;

        for(ll i=0;i<1<<n;i++)
        {
            ll val;
            cin>>val;

            all_num.insert(val);
        }

        vector<ll>ans;
        multiset<ll>generated_num;
        
        all_num.erase(all_num.find(0));
        generated_num.insert(0);
        while(all_num.empty()==false)
        {
            ll small_num = *all_num.begin();

            ans.push_back(small_num);
            vector<ll>subset_sum;

            for(auto k:generated_num)
            {
                subset_sum.push_back(small_num+k);
            }

            for(auto k:subset_sum)
            {
                generated_num.insert(k);
                all_num.erase(all_num.find(k));
            }
        }

        for(auto k:ans)
        cout<<k<<" ";

        cout<<endl;
    }
}
