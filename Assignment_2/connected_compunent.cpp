#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
const int N = 1002;
vector<int> adj[N];
bool visited[N];
void dfs(int u, int &c)
{
    // bool existNode = false;
    visited[u] = true;
    c++;
    for (int v : adj[u])
    {
        // existNode = true;
        if (visited[v])
            continue;
        dfs(v, c);
    }
    // return existNode;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v;

    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < N; i++)
    {
        int c = 0;
        if (visited[i] || !adj[i].size())
            continue;
        dfs(i, c);
        v.push_back(c);
    }
    sort(v.begin(), v.end());
    for (int a : v)
    {
        if (a > 1)
            cout << a << " ";
    }
    cout << endl;

    return 0;
}