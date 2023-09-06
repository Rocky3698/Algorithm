#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
const int N = 1e3 + 7;
vector<int> adj[N];
bool visited[N];
int depth[N];
int height[N];
void Depth_Height(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v])
            continue;
        depth[v] = depth[u] + 1;
        Depth_Height(v);
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
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    int node;
    cin >> node;
    Depth_Height(1);
    cout << "Depth of node " << node << " = " << depth[node] << endl;
    cout << " Height of node " << node << " = " << height[node] << endl;
    return 0;
}