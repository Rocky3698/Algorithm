#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
int parent[N];
int parentSize[N];
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}
int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}
void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            // A leader
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
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
    vector<Edge> List;
    vector<Edge> ans;
    dsu_set(n);
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        List.push_back(Edge(u, v, w));
    }
    sort(List.begin(), List.end(), cmp);
    for (Edge val : List)
    {
        int u = val.u;
        int v = val.v;
        int w = val.w;
        int leaderA = dsu_find(u);
        int leaderB = dsu_find(v);
        if (leaderA == leaderB)
            continue;
        ans.push_back(val);
        dsu_union(u, v);
    }
    long long sum = 0;
    for (Edge val : ans)
    {
        sum += (long long)val.w;
    }
    if (ans.size() == n - 1)
    {
        cout << sum << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
