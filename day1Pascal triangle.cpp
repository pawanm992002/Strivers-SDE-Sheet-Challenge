#include <bits/stdc++.h>

vector<long long int> genRow(int row)
{
    long long int res = 1;
    vector<long long int> ans;
    ans.push_back(1);
    for (int col = 1; col < row; col++)
    {
        res = res * (row - col);
        res = res / col;
        ans.push_back(res);
    }
    return ans;
}

vector<vector<long long int>> printPascal(int n)
{
    vector<vector<long long int>> ans;
    for (int i = 1; i <= n; i++)
        ans.push_back(genRow(i));

    return ans;
}
