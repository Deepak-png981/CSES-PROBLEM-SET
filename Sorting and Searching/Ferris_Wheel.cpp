#include <iostream>
#include <unordered_map>
#include <string.h>
#include <algorithm>
#define ll long long
using namespace std;
void solve()
{
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans = 0;
    for(int i = 1; i<n;i++){
        if(arr[i-1] + arr[i] <= x){
            ans+=2;
            i++;
        }
        else if(arr[i] > x){
            break;
        }
        if(arr[i-1] <= x ){
            
        }
    }
}
int main()
{
    solve();
    return 0;
}