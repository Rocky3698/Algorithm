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
int dfs(int i, int j)
{
    int c = 0;
    if (isValid(i, j) && !visited[i][j] && g[i][j] != '-')
    {
        c++;
        visited[i][j] = true;
        for (auto d : dirr)
        {
            c = c + dfs(i + d.first, j + d.second);
        }
    }
    return c;
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
    int area = INT_MAX;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && g[i][j] != '-')
            {
                area = min(area, dfs(i, j));
                flag=true;
            }
        }
    }
    flag?cout<<area<<endl:cout<<-1<<endl;
    return 0;
}