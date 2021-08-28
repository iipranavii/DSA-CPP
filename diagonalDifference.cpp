#include <iostream>
using namespace std;

int main()
{
    int r, c, d1 = 0, d2 = 0;
    cin >> r;
    c = r;
    int m[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin >> m[i][j];
            // if (i == j)
            //     d1 += m[i][j];
            // if (i = r - j - 1)
            //     d2 += m[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        d1 += m[i][i];
        d2 += m[i][r - i - 1];
    }

    cout << d1 - d2;

    return 0;
}