#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
    vector<pair<int, int>> zeros;
    int rows = matrix.size(), cols = matrix[0].size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
                zeros.push_back(make_pair(i, j));
        }
    }
    for (auto it : zeros)
    {
        int x = it.first, y = it.second;
        for (int i = 0; i < cols; i++)
            matrix[x][i] = 0;

        for (int i = 0; i < rows; i++)
            matrix[i][y] = 0;
    }
}