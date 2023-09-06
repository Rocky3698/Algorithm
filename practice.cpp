#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int N = 1e3 + 5;
const int INF = 1e9 + 7;
vector<int> g[N];
vector<bool> visited(N, false);
int level[N];
int height[N];
void dfs(int u)
{
    visited[u] = true;
    // level[u]=0;
    for (auto v : g[u])
    {

        if (visited[v])
            continue;
        level[v] = level[u] + 1;
        dfs(v);
        height[u] = max(height[v] + 1, height[u]);
        // cout << v << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= e; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(0);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << " " << level[i] << " " << height[i] << endl;
    }
    return 0;
}