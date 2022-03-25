#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    //the entery and exit timming of the customers
    ll x , y;
    //making a pair of vector which stores two things
    // the integer value
    //and the booooooooooooooooolean value
    //if the integer value is the time of entering then
    //the booooooooooooolean value is true
    //and if the integer value is the time of exiting the
    //the boooooooooooooooolean value is false
    vector<pair<int , bool>> v;
    int timings;
    cin>>timings;
    while(timings--){
        //taking in the times of entering and leaving
        cin>>x>>y;
        //push back in the array 
        v.push_back(make_pair(x , true));
        v.push_back(make_pair(y , false));
    }
    //sorting the array O(n log n);
    sort(v.begin() , v.end());
    ll ans = 0 , result = 0;
    for(int i = 0; i < v.size(); i++){
        //if the boolean is true then incrementing the and
        if( v[i].second == true){
            ans++;
            //storing the max of result and ans in ans
            result = max(result , ans);
        }
        else{
            //we will resduse the ans
            ans--;
        }
    }
    cout<<result<<endl;
}
int main()
{
    solve();
    return 0;
}