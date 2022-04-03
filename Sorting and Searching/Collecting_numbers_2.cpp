#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n , q;
    cin>>n>>q;
    vector<int> arr , posOfArr;
    for(int i = 1; i <= n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
        //storing the index of each element int posOfArr
        posOfArr[arr[i]] = i;
    }
    //we will be initializing ans with 1 because we will 
    //take minimum 1 round to collect all the numbers
    int ans = 1;
    //now we will be iterating through the array
}
int main()
{
    solve();
    return 0;
}