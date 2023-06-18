#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m)
{
    long ans = 1;
    long temp = x;
    while (n)
    {
        if (n % 2 == 1)
            ans = (ans * temp) % m;
        temp = (temp * temp) % m;
        n /= 2;
    }
    return int(ans);
}