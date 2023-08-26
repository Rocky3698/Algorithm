#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int N = 1e3 + 5;
const int INF = 1e9 + 7;
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
    if (isValid(i, j) && !visited[i][j] && g[i][j] != '-')
    {
        visited[i][j] = true;
        for (auto d : dirr)
        {
            dfs(i + d.first, j + d.second);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        g.push_back(s);
    }
    int si, sj, di, dj;
    cin >> si >> sj;
    cin >> di >> dj;
    dfs(si, sj);
    if (visited[di][dj])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}