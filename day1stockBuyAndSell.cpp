#include <bits/stdc++.h>

int findMin(vector<int> &prices, int n)
{
    int mini = prices[0];
    for (int i = 1; i < n; i++)
    {
        if (prices[i] < mini)
            mini = prices[i];
    }
    return mini;
}
int maximumProfit(vector<int> &prices)
{
    int n = prices.size();
    int maxProfit = 0;
    int mini = prices[0];
    for (int i = 1; i < n; i++)
    {
        int profit = prices[i] - mini;
        maxProfit = max(maxProfit, profit);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}