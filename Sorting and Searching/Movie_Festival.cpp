#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll test;
    cin>>test;
    ll x , y;
    vector<pair<int , int>> v;
    while(test--){
        cin>>x>>y;
        v.push_back(make_pair(y, x));
    }
    sort(v.begin() , v.end());
    int ans = 0 , result = 0;
    for(auto element : v){
        if(element.first >= ans){
            ans = element.second;
            result++;
        }
    }

    cout<<result<<endl;
}
int main()
{
    solve();
    return 0;
}
