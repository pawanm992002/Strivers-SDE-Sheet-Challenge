#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int> arr)
{
    unordered_map<int, int> mp;
    int presum = 0, cnt = 0, N = arr.size(), K = 0;
    for (int i = 0; i < N; i++)
    {
        presum = presum + arr[i];
        if (presum == K)
            cnt = i + 1;

        if (mp.find(presum) == mp.end())
            mp.insert({presum, i});

        if (mp.find(presum - K) != mp.end())
            cnt = max(cnt, i - mp[presum - K]);
    }
    return cnt;
}