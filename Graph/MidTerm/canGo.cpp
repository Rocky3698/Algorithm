#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int N = 1e3 + 5;
const int INF = 1e9 + 7;
vector<pii> g[N];
vector<int> dist(N, INF);
vector<bool> visited(N);
void reset()
{
    for (int i = 0; i < N; i++)
    {
        dist[i] = INF;
        visited[i] = false;
    }
}
void dijkstra(int source)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[source] = 0;
    pq.push({0, source});
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;
        for (pii vpair : g[u])
        {
            int v = vpair.first;
            int w = vpair.second;
            if (visited[v])
                continue;
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
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
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }
    int s;
    cin >> s;
    dijkstra(s);

    int t;
    cin >> t;
    while (t--)
    {
        int d, c;
        cin >> d >> c;
        // reset();
        if (dist[d] <= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}