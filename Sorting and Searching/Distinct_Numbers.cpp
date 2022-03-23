/*
You are given a list of n integers, and your task is to calculate the number of distinct values in the list.

Input

The first input line has an integer n: the number of values.

The second line has n integers x1,x2,…,xn.

Output

Print one integers: the number of distinct values.

Constraints
1≤n≤2⋅105
1≤xi≤109
Example

Input:
5
2 3 2 2 3

Output:
2
*/
//failed method
// #include <iostream>
// #include <unordered_map>
// #include <string.h>
// #include <vector>
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// //Binary search
// bool binarySearch(ll arr[], int l, int r, int x)
// {
//     if (r >= l) {
//         int mid = l + (r - l) / 2;
 
//         // If the element is present at the middle
//         // itself
//         if (arr[mid] == x)
//             return false;
 
//         // If element is smaller than mid, then
//         // it can only be present in left subarray
//         if (arr[mid] > x)
//             return binarySearch(arr, l, mid - 1, x);
 
//         // Else the element can only be present
//         // in right subarray
//         return binarySearch(arr, mid + 1, r, x);
//     }
 
//     // We reach here when element is not
//     // present in array
//     return true;
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     ll v[n];
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v[i];
//     }
//     //TLE
//     // for(int i = 0; i<n; i++){
//     //     bool flag = true;
//     //     for(int j = i+1; j<n; j++){
//     //         if(v[i] == v[j])
//     //         flag = false;
//     //     }
//     //     if(flag == true)
//     //     count++;
//     // }
//     // sort(v , v+n);
//     for(int i = 0; i<n; i++){
//         bool ans = binarySearch(v , i+1 , n-1 , v[i]);
//         if(ans == true)
//         count++;
//     }
//     cout<<count<<endl;
// }
// int main()
// {
//     solve();
//     return 0;
// }

//Again failed approach
//using unoordered map this time
// #include<iostream>
// #include<unordered_map>
// #include <iterator>
// #include<string.h>
// #include <bits/stdc++.h>
// using namespace std;
// #define ll int
// void solve(){
//     ll n;
//     cin>>n;
//     ll count = 0;
//      unordered_map<ll  , ll>map;
//       ll x;
//      for(ll i = 0; i<n; i++){
       
//         cin>>x;
//         map[x] = 1;
//      } 
//     cout<<map.size()<<endl;
// }
// int main()
// {
//     solve();
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr , arr+n);
    int count = 1;
    for(int i = 1; i<n; i++)
    {
        if(arr[i] != arr[i-1])
        count++;
    }
    cout<<count<<endl;
    return 0;
}