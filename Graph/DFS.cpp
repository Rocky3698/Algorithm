#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];

void dfs(int u)
{
    // Section 1 : Action just after entering a node
    visited[u] = true;
    cout << "Visiting node :" << u << endl;
    for (int v : adj[u])
    {
        // Section 2 : Action before entering a new neighbor
        if (visited[v])
            continue;
        dfs(v);
        // Section 3 : Action after existing a neighbor
    }
    // Section 4 : Action before existing node u
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
    // for(int i=1;i<=n;i++){
    //     cout<< "Node "<<i<<" :";
    //     for(int x:adj[i]){
    //         cout<<x<<" ";
    //     }
    //     cout<<endl;
    // }
    dfs(1);

    return 0;
}