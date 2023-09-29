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
    vector<Edge> v;
    vector<Edge> ans;
    dsu_set(n);
    while (e--)
    {
        int u, b, w;
        cin >> u >> b >> w;
        v.push_back(Edge(u, b, w));
    }
    sort(v.begin(), v.end(), cmp);
    bool flag = false;
    int cnt = 0;
    for (Edge Edg : v)
    {
        int a = Edg.u;
        int b = Edg.v;
        int w = Edg.w;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
        {
            flag = true;
            cnt++;
            continue;
        }
        ans.push_back(Edg);
        dsu_union(a, b);
    }
    long long sum = 0;
    if(ans.size()==n-1)
    {
        // cout << ans.size();
        for (Edge val : ans)
        {
            sum += val.w;
        }
        cout << cnt << " " << sum << endl;
    }
    else cout<<"Not Possible"<<endl;
    // flag ? cout << sum << endl : cout << "Not Possible" << endl;
    return 0;
}
