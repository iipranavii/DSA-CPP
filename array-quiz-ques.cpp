#include <bits/stdc++.h>
using namespace std;

int main()
{
    // What is the output of the following C code?
    //Assume that the address of x is 2000 (in decimal) and an integer requires four bytes of memory.
    int x[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    printf("%u,%u, %u", x + 3, *(x + 3), *(x + 2) + 3);
    return 0;
}