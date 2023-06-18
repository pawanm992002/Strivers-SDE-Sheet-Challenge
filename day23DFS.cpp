void dfs(vector<vector<int>> &edges, vector<int> &temp, vector<bool> &vis, int i)
{
    vis[i] = true;
    temp.push_back(i);
    for (int u : edges[i])
    {
        if (!vis[u])
            dfs(edges, temp, vis, u);
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    vector<vector<int>> ans;
    vector<bool> vis(V, false);
    vector<vector<int>> adj(V);
    for (auto e : edges)
    {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            vector<int> temp;
            dfs(adj, temp, vis, i);
            ans.push_back(temp);
        }
    }
    return ans;
}