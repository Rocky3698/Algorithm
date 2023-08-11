#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
const int N = 1e4 + 7;
bool visited[N];
vector<int> adj[N];
void bfs(int s)
{
    stack<int> S;
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        S.push(u);
        // Section 1: Processing a node just after popping from the queue.

        for (int v : adj[u])
        {
            // Section 2: actions needed to take before pushing into the queue.
            if (visited[v] == true)
                continue;
            q.push(v);
            visited[v] = true;
            // Section 3: actions needed to take after pushing into the queue(not quite different from section 2)
        }
        // Section 4: Finally if anything needs to be done after pushing all the children into the queue
    }
    while (!S.empty())
    {
        cout << S.top() << " ";
        S.pop();
    }
    cout << endl;
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

    bfs(1);
    return 0;
}