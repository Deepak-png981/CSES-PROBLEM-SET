#include<iostream>
#include<math.h>
#define lle long long int
using namespace std;
int main(){

    lle n;
    cin>>n;
    lle x = 1e9 + 7;
    lle ans = 1;
    // lle ans = pow(2 , n);
    for(lle i = 0; i<n; i++){
        ans = (ans*2)%x;
    }
    cout<<ans;

    return 0;
}