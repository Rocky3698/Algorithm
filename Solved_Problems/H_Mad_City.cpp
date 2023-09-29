#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 2e5 + 5;
vector<int> adj[N];
bool visited[N];
bool vis[N];
int levelA[N];
int levelB[N];
void set_values()
{
    for (int i = 0; i < N; i++)
    {
        vis[i] = false;
        visited[i] = false;
        levelA[i] = 0;
        levelB[i] = 0;
        adj[i].clear();
    }
}
void set_valuesA()
{
    for (int i = 0; i < N; i++)
    {
        vis[i] = false;
        levelA[i] = 0;
    }
}
void bfs(int s, bool x)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    if (x)
        levelB[s] = 0;
    else
        levelA[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (vis[v])
                continue;
            q.push(v);
            vis[v] = true;
            if (x)
                levelB[v] = levelB[u] + 1;
            else
                levelA[v] = levelA[u] + 1;
        }
    }
}

void dfs(int u, int p, int &c, bool &flag)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (v == p)
            continue;
        if (visited[v])
        {
            if (flag)
            {
                c = v;
                flag = false;
            }
            continue;
        }
        dfs(v, u, c, flag);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        bool flag = true;
        int n, a, b, c;
        cin >> n >> a >> b;
        set_values();
        for (int i = 0; i < n; i++)
        {

            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(b, b, c, flag);
        bfs(b, true);
        set_valuesA();
        bfs(a, false);
        // cout << c << " ";
        if (levelB[c] < levelA[c])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}