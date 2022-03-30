#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    //sorting the array
    sort(arr , arr + n);
    ll ans = 1;
    //now if the ans is less than the current
    // element then it will be our final answer
    //else we will be simply adding the current number
    //to the sum
    for(int i = 0; i<n; i++){
        if(ans < arr[i])
        break;
        else
        ans += arr[i];
    }
    cout<<ans<<endl;
}
int main()
{
    solve();
    return 0;
}