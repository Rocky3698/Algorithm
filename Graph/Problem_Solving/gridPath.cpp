#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e3 + 5;
int n, m;
vector<string> g;
pii parent[N][N];
bool visited[N][N];
vector<pii> dirr = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool isValid(int i, int j)
{
    return (i >= 0 && i < n) && (j >= 0 && j < m);
}
// dfs solution

// void dfs(int i, int j)
// {
//     if (!isValid(i, j))
//         return;
//     if (g[i][j] == 'x')
//         return;
//     if (visited[i][j])
//         return;
//     visited[i][j] = true;
//     for (auto d : dirr)
//     {
//         dfs(i + d.first, j + d.second);
//     }
// }

// bfs solution

void bfs(int si, int sj)
{
    queue<pii> q;
    q.push({si, sj});
    visited[si][sj] = true;
    while (!q.empty())
    {
        pii upair = q.front();
        q.pop();
        int i = upair.first;
        int j = upair.second;
        for (auto d : dirr)
        {
            int ni = i + d.first;
            int nj = j + d.second;
            if (isValid(ni, nj) && !visited[ni][nj] && g[ni][nj] != 'x')
            {
                visited[ni][nj] = true;
                parent[ni][nj] = {i, j};
                q.push({ni, nj});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        g.push_back(s);
        for (int j = 0; j < m; j++)
        {
            if (s[j] == 's')
            {
                si = i;
                sj = j;
            }
            if (s[j] == 'e')
            {
                di = i;
                dj = j;
            }
        }
    }
    // dfs(si, sj);

    bfs(si, sj);
    vector<pii> path;
    pii curr = {di, dj};
    while (!(curr.first == si && curr.second == sj))
    {
        path.push_back(curr);
        curr = parent[curr.first][curr.second];
    }
    path.push_back({si, sj});
    // if (visited[si][sj] && visited[di][dj])
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
    reverse(path.begin(), path.end());
    for (int i = 1; i < path.size(); i++)
    {
        if (path[i - 1].second == path[i].second)
        {
            if (path[i - 1].first + 1 == path[i].first)
                cout << "D";
            else
                cout << "U";
        }
        else
        {
            if (path[i - 1].second + 1 == path[i].second)
                cout << "R";
            else
                cout << "L";
        }
    }
    if (visited[si][sj] && visited[di][dj])
        cout << path.size() << endl;
    else
        cout << -1 << endl;

    return 0;
}