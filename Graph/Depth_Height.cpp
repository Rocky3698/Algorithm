#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
int depth[N];
int height[N];
void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v])
            continue;
        depth[v] = depth[u] + 1;
        dfs(v);
        height[u] = max(height[v] + 1, height[u]);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    for (int i = 1; i <= n; i++)
        cout << depth[i] << endl;
    return 0;
}