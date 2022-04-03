#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    int x;
    cin>>n;
    multiset<int>set;
    for(int i = 0; i<n;i++){
        cin>>x;
        //an auto iterator which will check for the just next 
        //element which is greater then the value of k
        auto it = set.upper_bound(x);
        //if the next just greater element is not found
        //then we will create one new tower
        if(it == set.end())
        set.insert(x);
        //if we found the element then will simply delete the iterator
        //and update the top of the tower
        else{
            set.erase(it);
            set.insert(x);
        }
    }
    cout<<set.size();
}
int main()
{
    solve();
    return 0;
}