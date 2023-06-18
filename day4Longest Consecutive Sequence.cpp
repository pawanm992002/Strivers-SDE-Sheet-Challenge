#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
{
    unordered_set<int> hash;
    for (int i = 0; i < n; i++)
        hash.insert(arr[i]);

    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (hash.count(arr[i] - 1))
            continue;
        int count = 1;
        int x = arr[i] + 1;
        while (hash.count(x))
            x++, count++;
        ans = max(ans, count);
    }
    return ans;
}