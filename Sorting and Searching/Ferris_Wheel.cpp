#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll weight;
    cin>>weight;
    ll arr[n];
    for(ll i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr , arr + n);
    ll ans = 0;
    //failed idea
    // for(ll i = 1; i<n; i++){
    //     if((arr[i-1] + arr[i]) <= weight){
    //         ans += 2;
    //         i ++;
    //     }
    //     else if(arr[i] <= weight){
    //         // i++;
    //         ans++;
    //         i ++;
    //     }
    //     else if(arr[i-1] <= weight){
    //         ans++;
    //     }
    //     else if(arr[i] > weight){
    //         break;
    //     }
    // }

    //so basically what we are going to do is , we are using two pointer
    //method in which we will check the first weight plus the last weight
    //if it will be less than the variable weight then we will increase
    //ans and if not then we will simply decrease the last position by 1
    ll i = 0, j = n-1;
    while(i <= j){
        if((arr[i] + arr[j]) <= weight){
            i++;
            j--;
            ans++;
        }
        else{
            j--;
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    solve();
    return 0;
}