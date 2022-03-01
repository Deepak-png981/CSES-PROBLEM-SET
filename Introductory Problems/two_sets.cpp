#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    // calculating the sum for n natural numbers
    ll sum = (n * (n + 1)) / 2;
    // if sum is odd then printing NO
    if (sum % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        // if sum is even then it will be definitely divide into two parts. so,
        cout << "YES" << endl;

        // vectors for storing the numbers
        vector<long long int> arr1, arr2;
        // dividing the total into  half
        sum = sum / 2;
        while (n)
        {
            if ((sum - n) >= 0)
            {
                arr1.push_back(n);
                sum = sum - n;
            }
            else
            {
                arr2.push_back(n);
            }
            n--;
        }
        cout << arr1.size() << endl;
        for (int i = 0; i < arr1.size(); i++)
        {
            cout << arr1[i] << " ";
        }
        cout << endl;
        cout << arr2.size() << endl;
        for (int i = 0; i < arr2.size(); i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
