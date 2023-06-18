#include <bits/stdc++.h>

void solve(vector<int> &num, int n, vector<int> &ans, int sum)
{
    if (n == 0)
    {
        ans.push_back(sum);
        return;
    }
    solve(num, n - 1, ans, sum + num[n - 1]);
    solve(num, n - 1, ans, sum);
}
vector<int> subsetSum(vector<int> &num)
{
    int n = num.size();
    vector<int> ans;
    solve(num, n, ans, 0);
    sort(ans.begin(), ans.end());
    return ans;
}