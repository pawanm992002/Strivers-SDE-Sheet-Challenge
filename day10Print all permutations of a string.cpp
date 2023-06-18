#include <bits/stdc++.h>

void solve(string &s, int l, int r, vector<string> &ans)
{
    if (l == r)
    {
        ans.push_back(s);
        return;
    }
    for (int i = l; i < r; i++)
    {
        swap(s[l], s[i]);
        solve(s, l + 1, r, ans);
        swap(s[l], s[i]);
    }
}
vector<string> findPermutations(string &s)
{
    vector<string> ans;
    solve(s, 0, s.size(), ans);
    return ans;
}