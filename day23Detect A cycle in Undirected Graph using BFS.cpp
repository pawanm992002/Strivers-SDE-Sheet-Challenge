#include <bits/stdc++.h>
bool bfs(unordered_map<int, vector<int>> &adj, unordered_map<int, bool> &vis, int i)
{
    unordered_map<int, int> parent;
    queue<int> q;
    parent[i] = -1;
    vis[i] = true;
    q.push(i);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : adj[u])
        {
            if (vis[v] == true && parent[u] != v)
                return true;
            else if (!vis[v])
            {
                q.push(v);
                vis[v] = true;
                parent[v] = u;
            }
        }
    }
    return false;
}
string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    unordered_map<int, vector<int>> adj;
    for (int i = 0; i < m; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    unordered_map<int, bool> vis;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            if (bfs(adj, vis, i))
                return "Yes";
    }
    return "No";
}
