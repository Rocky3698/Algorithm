#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
const int N = 25;
vector<int> adj[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        // adj[v].push_back(u);
    }
    int k;
    cin >> k;
    cout << adj[k].size();
    // cout<<adj[k].back();
    return 0;
}