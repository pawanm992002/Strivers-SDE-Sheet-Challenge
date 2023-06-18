#include <bits/stdc++.h>
int atoi(string str)
{
    int n = str.size();
    int ans = 0, temp = 1;
    for (int i = n - 1; i >= 1; i--)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            ans += (str[i] - '0') * temp;
            temp *= 10;
        }
    }
    if (str[0] == '-')
        return -ans;

    if (str[0] >= 48 && str[0] <= 57)
        ans += (str[0] - '0') * temp;

    return ans;
}