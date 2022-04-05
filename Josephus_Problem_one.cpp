#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int>elements(n);
    for(int i = 0; i<n; i++){
        elements[i] = i + 1;
    }
    while(elements.size() > 1){
        vector<int> supporter;
        for(int i = 0; i<elements.size(); i++){
            if(i%2 == 1){
                cout<<elements[i]<<" ";
            }
            else{
                supporter.push_back(elements[i]);
            }
        }
        //if even
        if(elements.size()%2 == 0){
            elements = supporter;
        }
        else{
            int startingElement = supporter.back();
            supporter.pop_back();
            elements.clear();
            elements.push_back(startingElement);
            for(int i = 0; i<supporter.size(); i++){
                elements.push_back(supporter[i]);
            }
        }
    }
    cout<<elements[0];
}
int main()
{
    solve();
    return 0;
}