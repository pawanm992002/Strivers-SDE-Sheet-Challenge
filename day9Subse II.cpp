#include <bits/stdc++.h>

void solve(vector<int> &arr, int n, vector<vector<int>> &ans, vector<int> &temp)
{
    if (n == 0)
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(arr[n - 1]);
    solve(arr, n - 1, ans, temp);
    temp.pop_back();
    solve(arr, n - 1, ans, temp);
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    sort(arr.begin(), arr.end(), greater<int>());
    vector<vector<int>> ans;
    vector<int> temp;
    solve(arr, n, ans, temp);
    set<vector<int>> s;

    for (auto it : ans)
        s.insert(it);

    ans.clear();
    for (auto it : s)
        ans.push_back(it);

    return ans;
}