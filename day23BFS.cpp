#include <bits/stdc++.h>
void bfs(unordered_map<int, set<int>> &adj, unordered_map<int, bool> &vis, vector<int> &ans, int i)
{
    queue<int> q;
    q.push(i);
    vis[i] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        ans.push_back(u);
        for (auto v : adj[u])
        {
            if (!vis[v])
            {
                q.push(v);
                vis[v] = true;
            }
        }
    }
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, set<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        adj[edges[i].first].insert(edges[i].second);
        adj[edges[i].second].insert(edges[i].first);
    }
    unordered_map<int, bool> vis;
    vector<int> ans;
    for (int i = 0; i < vertex; i++)
    {
        if (!vis[i])
            bfs(adj, vis, ans, i);
    }
    return ans;
}