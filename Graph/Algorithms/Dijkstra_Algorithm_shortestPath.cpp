#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e3 + 7;
vector<pii> graph[N];
vector<int> dist(N, INF);
vector<bool> visited(N);
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
        for (pii vpair : graph[u])
        {
            int v = vpair.first;
            int w = vpair.second;
            if (visited[v])
                continue;
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v],v});
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}