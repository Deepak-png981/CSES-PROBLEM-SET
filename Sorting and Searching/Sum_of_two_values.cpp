#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n , target;
    cin>>n>>target;
    vector<pair<int , int>>arr;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(make_pair(x , i+1));
    }
 
    sort(arr.begin() , arr.end());
    int i = 0 , j = n-1;
    while(i < j){
        if((arr[i].first + arr[j].first) > target){
            j--;
        }
        else if((arr[i].first + arr[j].first) < target){
            i++;
        }
        else if((arr[i].first + arr[j].first) == target){
            cout<<arr[i].second <<" "<<arr[j].second<<endl;
            return;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return;
}
int main()
{
    solve();
    return 0;
}