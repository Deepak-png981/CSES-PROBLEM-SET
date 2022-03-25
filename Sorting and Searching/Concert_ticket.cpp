#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n , m;
    cin>>n>>m;
   //as the two tickets can
   //have same price so we are
   //using multiset here
   multiset<int> h;
   for(ll i = 0; i<n; i++){
       ll ticket_price;
       cin>>ticket_price;
       //inserting the ticket prices in sorted
       //order in the multiset
       h.insert(ticket_price);
   }
   for(ll i= 0; i<m; i++){
       ll ticket_bid;
       cin>>ticket_bid;
       //basically we are looking for the
       //nearest number to the ticket bid
       //or I can simply say that the 
       //upper bound. so,
       auto it = h.upper_bound(ticket_bid);
       //if the first element is being 
       //greater than the price of the bid
       if(it == h.begin()){
           cout<<"-1"<<endl;
       }
       else{
           //we need to move back to the 
           //price less than so
           --it;
           //printing the iterator
           cout<<(*it)<<endl;
           //erasing the iterator
           //as the same ticket cannot
           //be bought again
           h.erase(it);
       }
   }

}

int main()
{
    solve();
    return 0;
}