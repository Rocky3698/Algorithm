#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int N = 1e3 + 5;
const int INF = 1e9 + 7;
bool visited[N][N];
int level[N][N];
vector<pii> dirr = {{-1, -2}, {-2, -1}, {1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}};
int n, m;
bool isValid(int i, int j)
{
    return (i >= 0 && i < n) && (j >= 0 && j < m);
}
void reset()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            level[i][j] = 0;
            visited[i][j] = false;
        }
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
        for (auto d : dirr)
        {
            int ni = i + d.first;
            int nj = j + d.second;

            if (isValid(ni, nj) && !visited[ni][nj])
            {
                q.push({ni, nj});
                level[ni][nj] = level[i][j] + 1;
                visited[ni][nj] = true;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        // if (n <= 2 && m <= 2)
        // {
        //     cout << -1 << endl;
        //     return 0;
        // }
        int ki, kj, qi, qj;
        cin >> ki >> kj;
        cin >> qi >> qj;
        bfs(ki, kj);
        if (level[qi][qj]||(ki==qi&&kj==qj))
            cout << level[qi][qj] << endl;
        else
            cout << -1 << endl;
        reset();
    }
    return 0;
}