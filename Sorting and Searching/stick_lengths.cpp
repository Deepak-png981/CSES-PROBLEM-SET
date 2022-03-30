#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin() , arr.end());
    int beechKa = arr[n/2];
    ll ans = 0;
    for(int i = 0; i<n; i++){
        ans += abs(beechKa - arr[i]);
    }
    cout<<ans<<endl;
}
int main()
{
    solve();
    return 0;
}