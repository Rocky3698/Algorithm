#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int X = INT_MAX - 1;
void Sol(int n, int s, int arr[]);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n], M = 1000 - m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Sol(n, M, arr);
    }
}
void Sol(int n, int s, int arr[])
{
    int dp[n + 1][s + 1];
    dp[0][0] = 0;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = X;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (arr[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = min(1 + dp[i][j - arr[i - 1]], dp[i - 1][j]);
            }
        }
    }
    if (dp[n][s] == X)
    {
        dp[n][s] = -1;
    }
    cout << dp[n][s] << endl;
}
