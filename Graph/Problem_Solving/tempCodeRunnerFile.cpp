#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e3 + 5;
int n, m;
vector<string> g;
bool visited[N][N];
vector<pii> dirr = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool isValid(int i, int j)
{
    return (i >= 0 && i < n) && (j >= 0 && j < m);
}
void dfs(int i, int j)
{
    if (!isValid(i, j))
        return;
    if (g[i][j] == 'x')
        return;
    if (visited[i][j])
        return;
    visited[i][j] = true;
    for (auto d : dirr)
    {
        dfs(i + d.first, j + d.second);
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
    dfs(si, sj);
    if (visited[si][sj] && visited[di][dj])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}