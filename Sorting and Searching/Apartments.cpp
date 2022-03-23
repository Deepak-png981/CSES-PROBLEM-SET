#include <iostream>
#include <unordered_map>
#include <string.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
void solve()
{
    // declaring unordered map
    // unordered_map<int, int> map;
    int numOfApplicants, noOfApartments, maxDifference;
    cin >> numOfApplicants >> noOfApartments >> maxDifference;
    int DesAppartments[numOfApplicants];
    for (int i = 0; i < numOfApplicants; i++)
    {
        cin >> DesAppartments[i];
        //  map[DesAppartments[i]] = 1;
    }
    int sizeOfAppartments[noOfApartments];
    for (int i = 0; i < noOfApartments; i++)
    {
        cin >> sizeOfAppartments[i];
        // map[sizeOfAppartments[i]] = 1;
    }
    int count = 0;
    sort(DesAppartments , DesAppartments + numOfApplicants);
    sort(sizeOfAppartments , sizeOfAppartments + noOfApartments);
    int i = 0 , j = 0;
    while(i < numOfApplicants and j < noOfApartments){
        if(abs(DesAppartments[i] - sizeOfAppartments[j]) <= maxDifference){
            count++;
            i++;
            j++;
        }
        else if(DesAppartments[i] > sizeOfAppartments[j]){
            j++;
        }
        else{
            i++;
        }
    }
    cout << count << endl;
}
int main()
{
    solve();
    return 0;
}