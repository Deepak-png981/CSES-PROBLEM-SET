#include<bits/stdc++.h>
using namespace std;
#define ll long long
int  result = 0;
//wrong approach
// void getSubarray(vector<int> arr , int start , int end){
//     int ans = 0;
//     if(end == arr.size()){
//         return ;
//     }
//     else if(start > end){
//         getSubarray(arr , 0 , end+1);
//     }
//     else{
//         for(int i = start; i<end; i++){
//             ans += arr[i];
//             result = max(result , ans);
//         }
//         getSubarray(arr , start + 1 , end);
//     }

// }

ll ansLeaBhai(vector<int> arr , int n){
    ll minimum_PrefixSum = 0;
    ll res = INT_MIN;
    ll prefix_Sums[n];
    prefix_Sums[0] = arr[0];
    for(int i = 1; i<n; i++)
    prefix_Sums[i] = arr[i] + prefix_Sums[i-1];
    for(int i = 0; i<n; i++){
        res = max(res , prefix_Sums[i] - minimum_PrefixSum);
        minimum_PrefixSum = min(minimum_PrefixSum , prefix_Sums[i]);
    }
    return res;
}
void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    // getSubarray(arr , 0 , 0);
    ll result = ansLeaBhai(arr , n);
    cout<<result<<endl;
}
int main()
{
    solve();
    return 0;
}