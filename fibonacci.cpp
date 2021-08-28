#include <iostream>
using namespace std;

int F[100];
int memoFib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = memoFib(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = memoFib(n - 1);
        return F[n - 2] + F[n - 1];
    }
}
int main()
{
    for (int i = 0; i < 100; i++)
    {
        F[i] = -1;
    }
    int n;
    cin >> n;
    cout << memoFib(n);

    return 0;
}