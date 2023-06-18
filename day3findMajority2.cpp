#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ans;
    int cond = arr.size() / 3;
    unordered_map<int, int> mp;
    for (auto x : arr)
    {
        mp[x]++;
    }
    for (auto x : mp)
    {
        if (x.second > cond)
            ans.push_back(x.first);
    }
    return ans;
}
