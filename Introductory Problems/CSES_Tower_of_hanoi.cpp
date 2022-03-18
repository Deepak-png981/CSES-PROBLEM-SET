/*
The Tower of Hanoi game consists of three stacks (left, middle and right) and n round disks of different sizes.
 Initially, the left stack has all the disks, in increasing order of size from top to bottom.

The goal is to move all the disks to the right stack using the middle stack. On each move you can move the 
uppermost disk from a stack to another stack. In addition, it is not allowed to place a larger disk on a 
smaller disk.

Your task is to find a solution that minimizes the number of moves.

Input

The only input line has an integer n: the number of disks.

Output

First print an integer k: the minimum number of moves.

After this, print k lines that describe the moves. Each line has two integers a and b: you move a disk 
from stack a to stack b.

Constraints
1≤n≤16
Example

Input:
2

Output:
3
1 2
1 3
2 3
*/
#include<iostream>
#include<unordered_map>
#include<string.h>
using namespace std;
void towerOfHanoi(int n , string src , string helper , string destination){
    //base case
    if(n == 1){
        cout<<src<<" "<<destination<<endl;
        return;
    }
    //source se utha ker ham helper mein daal rhe hai
    towerOfHanoi(n-1 , src , destination , helper);
    //printing
    cout<<src<<" "<<destination<<endl;
    //ab source se utha ker destination mein daal rhe hai
    towerOfHanoi(n - 1 , helper , src , destination);
}
void solve(int n){
    //this means 1*2^n - 1
    cout<< (1<<n) - 1<<endl;
    towerOfHanoi(n , "1" , "2" , "3" );
}
int main()
{
    int n;
    cin>>n;
    solve(n);
    return 0;
}