#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    int missing, repeating;
    unordered_set<int> check;
    for (int x : arr)
    {
        if (check.find(x) == check.end())
            check.insert(x);
        else
        {
            repeating = x;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (check.find(i) == check.end())
        {
            missing = i;
            break;
        }
    }
    return make_pair(missing, repeating);
}
