#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e3 + 5;
bool visited[N][N];
int level[N][N];
vector<pii> dirr = {{-1, -2}, {-2, -1}, {1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}};
bool isValid(int i, int j)
{
    return (i >= 0 && i < 8) && (j >= 0 && j < 8);
}
void reset_lvl_vis()
{
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
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

            if (!visited[ni][nj] && isValid(ni, nj))
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
        string x, y;
        cin >> x >> y;
        // coverting to cordinates
        int si, sj, di, dj;
        si = x[0] - 'a';
        sj = x[1] - '1';
        di = y[0] - 'a';
        dj = y[1] - '1';

        bfs(si, sj);
        cout << level[di][dj] << endl;
        reset_lvl_vis();
    }

    return 0;
}
/*
3
a1 h8
a1 c2
h8 c3
*/