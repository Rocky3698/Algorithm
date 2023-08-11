#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (visited[v] == true)
                continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<int, vector<int>> mp;
    int n, m;
    cin >> n >> m;
    int s;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        s = v;
    }
    int lv;
    cin >> lv;
    bfs(0);
    bool flag = true;
    if (lv == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < N; i++)
    {
        if (lv == level[i])
        {
            flag = false;
            cout << i << " ";
        }
    }
    if (flag)
        cout << -1 << " ";

    return 0;
}