/*
Your task is to place eight queens on a chessboard so that no two queens are attacking each other. As an additional challenge, each square is either free or reserved, and you can only place queens on the free squares. However, the reserved squares do not prevent queens from attacking each other.

How many possible ways are there to place the queens?

Input

The input has eight lines, and each of them has eight characters. Each square is either free (.) or reserved (*).

Output

Print one integer: the number of ways you can place the queens.

Example

Input:
........
........
..*.....
........
........
.....**.
...*....
........

Output:
65
*/
#include <bits/stdc++.h>
using namespace std;
// global variable which contains the final answer
int N = 0;
// Declaring 8X8 matrix of type char for taking in input
// so that it can be accessed globally
char arr[8][8];
// isValid helper function is there to check whether the
// given pair of row and column is valid or not
bool isValid(int row, int col)
{
    // checking reserved postion
    if (arr[row][col] == '*')
        return false;
    // checking if any queen is present in the vertical position
    // of the queen which is place now
    for (int i = 0; i < 8; i++)
    {
        if (arr[i][col] == 'q')
            return false;
    }
    // now to check the negative slop \ what we need to do id
    //  just continuously subtracting 1 from both rows and colm
    // example 3 , 3 => 2 ,2 =>1 , 1 => 0,0
    for (int i = row, j = col; i >= 0 and j >= 0; i--, j--)
    {
        if (arr[i][j] == 'q')
            return false;
    }
    // checking the positive slop
    for (int i = row, j = col; i >= 0, j < 8; i--, j++)
        if (arr[i][j] == 'q')
            return false;

    return true;
}
// a function which takes in row as a parameter and iterate
// to all the column of the matrix and check whether queens can
// be place their or not, if yes then increases N
// using backtracking with recursion, it can also be done by iterative method
void count(int row)
{
    if (row == 8)
    {
        ++N;
        return;
    }
    // checking each column of that particular row to check
    // which row column number is valid
    for (int col = 0; col < 8; col++)
    {
        if (isValid(row, col))
        {
            arr[row][col] = 'q';
            count(row + 1);
            arr[row][col] = '.';
        }
    }
}
int main()
{

    // taking in input
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            cin >> arr[i][j];
    count(0);
    cout << N << endl;

    return 0;
}