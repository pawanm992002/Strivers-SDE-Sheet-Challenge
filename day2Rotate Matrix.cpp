#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int sr = 0, er = n - 1;
    int sc = 0, ec = m - 1;
    while (sr < er && sc < ec)
    {
        int i, cur, prev = mat[sr + 1][sc];
        for (i = sc; i <= ec; i++)
        {
            cur = mat[sr][i];
            mat[sr][i] = prev;
            prev = cur;
        }
        sr++;
        for (i = sr; i <= er; i++)
        {
            cur = mat[i][ec];
            mat[i][ec] = prev;
            prev = cur;
        }
        ec--;
        for (i = ec; i >= sc; i--)
        {
            cur = mat[er][i];
            mat[er][i] = prev;
            prev = cur;
        }
        er--;
        for (i = er; i >= sr; i--)
        {
            cur = mat[i][sc];
            mat[i][sc] = prev;
            prev = cur;
        }
        sc++;
    }
}