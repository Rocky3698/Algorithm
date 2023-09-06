#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
const int N = 1e6 + 7;
vector<int> adj[N];
bool visited[N];
void reverse_print(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v])
            continue;
        reverse_print(v);
    }
    cout << u << " ";
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
    reverse_print(1);

    return 0;
}