#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Standard array in  Stack Memmory:
    int arrS[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    //single pointer 2D-Array:
    int *arrSP[3];
    arrSP[0] = new int[4];
    arrSP[1] = new int[4];
    arrSP[2] = new int[4];

    //double pointer 2D-array:
    int **arrDP;
    arrDP = new int *[3];
    arrDP[0] = new int[4];
    arrDP[1] = new int[4];
    arrDP[2] = new int[4];
    return 0;
}