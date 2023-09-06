#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int N = 1e2 + 5;
const long long INF = 1e18 + 7;
long long d[N][N];
int n, e;
void dist_initialize()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != j)
                d[i][j] = INF;
        }
    }
}
bool cmp(pair<pii, long long> p1, pair<pii, long long> p2)
{
    return p1.second > p2.second;
}
vector<pair<pii, long long>> L;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> e;
    dist_initialize();

    for (int i = 0; i < e; i++)
    {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        L.push_back({{u, v}, w});
    }
    sort(L.begin(), L.end(), cmp);

    for (auto p : L)
    {

        d[p.first.first][p.first.second] = min(d[p.first.first][p.first.second], p.second);
        // d[p.first.second][p.first.first]=p.second;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int s, dis;
        cin >> s >> dis;
        if (d[s][dis] == INF)
            cout << -1 << endl;
        else
            cout << d[s][dis] << endl;
    }

    return 0;
}