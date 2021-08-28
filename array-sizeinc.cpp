#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int *arr = new int[n];
    int *bigArr = new int[10];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i * 2;
    }
    for (int i = 0; i < n; i++)
    {
        bigArr[i] = arr[i];
    }
    free(arr);
    arr = bigArr;
    bigArr = NULL;

    return 0;
}