#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    for(ll i = 1; i<=n; i++){
        ll total_no_of_positions = (i*i)*(i*i - 1)/2;
        ll attacking_positions = 4*(i-1)*(i-2);
        cout<<total_no_of_positions-attacking_positions<<endl;
    }


    return 0;
}