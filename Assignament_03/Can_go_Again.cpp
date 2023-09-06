#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int N = 1e3 + 5;
const long long INF = 1e18+5;
int n, e;
vector<pair<pii, long long>> List;
long long d[N];
bool bellman_ford(int s)
{
    for (int i = 1; i <= n; i++)
        d[i] = INF;

    d[s] = 0;
    bool flag = false;

    for (int i = 1; i <= n; i++)
    {
        // all edges relaxation
        for (auto edge : List)
        {
            int u = edge.first.first;
            int v = edge.first.second;
            int w = edge.second;

            if (d[u] != INF && d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                if (i == n)
                    flag = true;
            }
        }
    }
    return flag;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> e;
    for (int i = 1; i <= e; i++)
    {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        List.push_back({{u, v}, w});
    }
    int s;
    cin >> s;
    bool f = bellman_ford(s);
    if (f)
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int dis;
        cin >> dis;
        if (d[dis] == INF)
            cout << "Not Possible" << endl;
        else
            cout << d[dis] << endl;
    }

    return 0;
}