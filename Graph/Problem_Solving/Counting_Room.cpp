#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e3 + 5;
vector<string> graph;
int visited[N][N];
vector<pii> direc = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, m;
bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int i, int j)
{
    if (!isValid(i, j))
        return;
    if (graph[i][j] == '#')
        return;
    if (visited[i][j])
        return;
    visited[i][j] = true;

    // dfs(i + 1, j);
    // dfs(i - 1, j);
    // dfs(i, j + 1);
    // dfs(i, j - 1);
    // Or
    for (auto d : direc)
        dfs(i + d.first, j + d.second);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        graph.push_back(s);
    }
    int Room = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (graph[i][j] == '#')
                continue;
            if (visited[i][j])
                continue;
            dfs(i, j);
            Room++;
        }
    }
    cout << Room << endl;
    return 0;
}