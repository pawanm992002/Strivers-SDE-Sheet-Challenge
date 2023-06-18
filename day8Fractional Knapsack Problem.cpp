#include <bits/stdc++.h>

static bool cmp(pair<int, int> &i1, pair<int, int> &i2)
{
    return (double)i1.second / i1.first > (double)i2.second / i2.first;
}

double maximumValue(vector<pair<int, int>> &items, int n, int W)
{
    sort(items.begin(), items.end(), cmp);
    double profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (W < items[i].first)
        {
            profit += W * ((double)items[i].second / items[i].first);
            break;
        }
        profit += items[i].second;
        W -= items[i].first;
    }
    return profit;
}