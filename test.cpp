#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int hr = 0;
    if (s[8] == 'P')
    {
        ;
        hr = ((s[0] - '0') * 10) + (s[1] - '0');
        if (hr < 12)
        {
            hr += 12;
        }
        else
        {
            hr = (s[0] - '0') * 10 + (s[1] - '0');
            if (hr == 12)
            {
                hr = 0;
            }
        }
    }
    s[0] = hr / 10 + '0';
    s[1] = hr % 10 + '0';
    s[8] = " ";
    s[9] = " ";
    cout << s;
}