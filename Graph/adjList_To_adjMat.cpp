#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
const int N = 1e3 + 7;
int adjM[N][N];
vector<int> adjL[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjL[u].push_back(v);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j : adjL[i])
        {
            adjM[i][j]=1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjM[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}