#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
const int N = 1e5 + 7;
vector<int> adj[N];

void bfs(int s, bool visited[], int level[])
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

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int q;
    cin >> q;
    while (q--)
    {
        bool visited[N] = {false};
        int level[N] = {0};
        int s, e;
        cin >> s >> e;
        bfs(s, visited, level);
        if (visited[e])
            cout << level[e] <<endl;
        else cout<<-1<<endl;
    }

    return 0;
}