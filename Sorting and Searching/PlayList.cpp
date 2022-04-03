#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    //size of the vector;
    int n;
    cin>>n;
    //declaring vector;
    vector<int>arr(n);
    //taking in array;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = 0;
    set<int> songs;
    //for using two pointers
    int i = 0, j = 0;
    while(i < n and j < n){
        //checking if the song is not heard before
        //then update it into the song set and increment j
        while(j< n and !songs.count(arr[j])){
            //inserting the arr[j] into the set
            songs.insert(arr[j]);
            //updating the answer
            ans = max(ans , j - i +1);
            j++;
        }
        while(j < n and songs.count(arr[j])){
            //erase the song from the set songs
            songs.erase(arr[i]);
            i++;
        }
    }
    cout<<ans<<endl;
    return;
}
int main()
{
    solve();
    return 0;
}