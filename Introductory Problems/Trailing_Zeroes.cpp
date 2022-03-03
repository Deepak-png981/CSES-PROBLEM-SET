#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll result = 0;
    for(ll i = 5 ; n/i >= 1; i *= 5){
        result += n/i;
    }
    cout<<result<<endl;
}