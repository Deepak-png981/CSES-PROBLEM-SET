#include<iostream>
using namespace std;
int main(){
    long long tc;
    cin>>tc;
    while(tc--){

        long long x , y;
        cin>>x>>y;
        if(x<y){
            //column is odd
            long long ans = 0;
            if(y%2 != 0){
                ans = (y*y) - x +1;
            }
            //column is even
            else{
                ans = (y-1)*(y-1) + x;
            }
            cout<<ans<<endl;
        }
        else{
            long long ans = 0;
            if(x%2 == 0)
            {
                ans = x*x - y + 1;
            }
            else{
                ans = (x-1)*(x-1) + y;    
            }
            cout<<ans<<endl;
        }


    }
}