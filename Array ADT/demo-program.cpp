#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int *a;
    int size, length;
};

void displayArr(struct Array arr)
{
    cout << "Elements are: ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << " ";
    }
}
int main()
{
    struct Array arr;
    int i, n;
    cout << "Enter the size of array: ";
    cin >> arr.size;
    arr.a = new int[arr.size];
    arr.length = 0;
    cout << "Enter the number of Numbers: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr.a[i];
    arr.length = n;

    displayArr(arr);
    return 0;
}