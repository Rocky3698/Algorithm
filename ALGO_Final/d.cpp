#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size(), m = s2.size();
        int dp[n + 1][m + 1];

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        int res = 0;
        while (n != 0 && m != 0)
        {
            res++;
            if (s1[n - 1] == s2[m - 1])
            {
                n--;
                m--;
            }
            else if (dp[n - 1][m] > dp[n][m - 1])
            {
                n--;
            }
            else
            {
                m--;
            }
        }
        cout << res + n + m << endl;
    }
}