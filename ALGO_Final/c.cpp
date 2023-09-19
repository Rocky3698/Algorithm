#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const long long X = 1e9 + 7;

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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int s = 1000 - m;
        ll dp[n + 1][s + 1];
        dp[0][0] = 1;
        for (int i = 1; i <= s; i++)
        {
            dp[0][i] = 0;
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
                    dp[i][j] = (dp[i][j - arr[i - 1]] + dp[i - 1][j]);
                }
                dp[i][j] %= X;
            }
        }
        cout << dp[n][s] << endl;
    }
}
