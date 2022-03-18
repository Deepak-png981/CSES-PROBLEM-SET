/*
There are n apples with known weights. Your task is to divide the apples into two groups so that the difference between the weights of the groups is minimal.

Input

The first input line has an integer n: the number of apples.

The next line has n integers p1,p2,…,pn: the weight of each apple.

Output

Print one integer: the minimum difference between the weights of the groups.

Constraints
1≤n≤20
1≤pi≤109
Example

Input:
5
3 2 7 4 1

Output:
1

Explanation: Group 1 has weights 2, 3 and 4 (total weight 9), and group 2 has weights 1 and 7 (total weight 8).
*/
#include<iostream>
#include<unordered_map>
#include<string.h>
#include<vector>
using namespace std;
// #define ll long long int
#define int long long int
int findMinDiff(int *arr ,int currSum , int totalSum , int i )
{
    if(i == 0)
        return abs((totalSum-currSum) - currSum);
    
    return min(findMinDiff(arr , currSum + arr[i] , totalSum , i - 1) , findMinDiff(arr , currSum , totalSum , i - 1));

}
// void solve(){
      
// }
int32_t main()
{
    // solve();
    int n;
      cin>>n;
      int *arr = new int[n];
      int totalSum = 0;
      for(int i = 0; i<n; i++){
          cin>>arr[i];
          totalSum += arr[i];
      }
      cout<<findMinDiff(arr , 0 , totalSum , n-1)<<endl;
    return 0;
}

