#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e3 + 5;
int n, m;
int level[N][N];
pii parent[N][N];
bool visited[N][N];
vector<string> g;
vector<pii> dirr = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool isValid(int i, int j)
{
    return (i >= 0 && i < n) && (j >= 0 && j < m);
}
void bfs(int si, int sj)
{
    queue<pii> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pii upair = q.front();
        int i = upair.first;
        int j = upair.second;
        q.pop();
        for (auto v : dirr)
        {
            int ni = i + v.first;
            int nj = j + v.second;
            if (isValid(ni, nj) && (!visited[ni][nj]) && (g[ni][nj] != '#'))
            {
                q.push({ni, nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j] + 1;
                parent[ni][nj] = {i, j};
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int si, sj, di, dj;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == 'A')
            {
                si = i;
                sj = j;
            }
            if (s[j] == 'B')
            {
                di = i;
                dj = j;
            }
        }
        g.push_back(s);
    }
    // cout<<si<<sj<<di<<dj<<endl;
    bfs(si, sj);
    if (visited[di][dj])
    {
        cout << "YES" << endl
            << level[di][dj] << endl;
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }

    vector<pii> path;
    pii curr = {di, dj};
    while (!(curr.first == si && curr.second == sj))
    {
        path.push_back(curr);
        curr = parent[curr.first][curr.second];
    }
    path.push_back({si, sj});
    reverse(path.begin(), path.end());
    // for (auto p : path)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }
    for (int i = 1; i < path.size(); i++)
    {
        if (path[i - 1].first == path[i].first)
        {
            if (path[i - 1].second + 1 == path[i].second)
                cout << "R";
            else
                cout << "L";
        }
        else
        {
            if (path[i - 1].first + 1 == path[i].first)
                cout << "D";
            else
                cout << "U";
        }
    }
    return 0;
}
/*
5 8
########
#.A#...#
#.##.#B#
#......#
########
*/