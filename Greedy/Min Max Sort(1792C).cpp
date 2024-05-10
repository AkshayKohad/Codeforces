// Approach
If the array is already sorted, then the answer is 0. Otherwise, there is a last operation, after which the permutation
takes the form 1,2,…,n. Which means that the elements 1 and n are selected as the last operation 
(because they are at the first and last positions after the operation). Now we know that the last operation is (1,n)
and it doesn't matter where exactly these numbers are in the permutation, i. e. we can assume that the answer has
increased by 1, and consider only the numbers 2,3,…,n−2,n−1. Similarly, for the "remaining" permutation, there are 
two options, either it is sorted, and then the answer is 1, or there is a last operation and the numbers 2 and n−1
are used in it. And so on until the "remaining" permutation is sorted or empty.
It remains to find out how to quickly check whether the numbers in the segment [k,n−k+1] are sorted (they go in the
correct order in the initial permutation). Note that this segment corresponds to values of elements, not to positions 
in the permutation. If this segment is sorted for some k, then the answer does not exceed k−1.

There are several ways to check, let's consider one of them. Note that if the segment [k,n−k+1] is sorted for some value k, 
then it will be sorted for large values as well. So we can start with the maximum value of k(which is equal to ⌊n+12⌋) and
decrease it until the segment remains sorted. Now for each k we need only two checks that posk < posk+1 and
posn−k+1 > posn−(k+1)+1, where posi is the position of the element i in the permutation.

Thus, we got the solution in linear time.Another way is to run binary search on k since if the numbers in [k,n−k+1]
appear in the permutation in sorted order, the same holds for k+1. This approach yields a solution in O(nlogn).


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
        
        vector<int>pos(n+1);
        
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            
            pos[val]=i;
        }
        
        int l = (n+1)/2;
        int r = (n+2)/2;
        
        while(l>0 && (l==r || (pos[l]<pos[l+1] && pos[r-1]<pos[r])))
        {
            l--;
            r++;
        }
        
        
        cout<<(n-r+l+1)/2<<'\n';
    }
}
