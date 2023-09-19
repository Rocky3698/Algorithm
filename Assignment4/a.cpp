#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int N = 1e3 + 1;
const int INF = 1e9 + 7;
int dp[N][N];

int knapsack(int n, int b, int v[], int w[])
{
    if (n == 0 || b == 0)
    {
        return 0;
    }
    if (dp[n][b] != -1)
    {
        return dp[n][b];
    }

    if (w[n - 1] <= b)
    {
        int x = knapsack(n - 1, b, v, w);
        int y = knapsack(n - 1, b - w[n - 1], v, w) + v[n - 1];
        return dp[n][b] = max(x, y);
    }
    else
        return dp[n][b] = knapsack(n - 1, b, v, w);
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
        int n, b;
        cin >> n >> b;
        int v[n], w[n];

        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= b; j++)
                dp[i][j] = -1;
        }
        cout << knapsack(n, b, v, w) << endl;
    }

    return 0;
}
