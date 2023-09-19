#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
int LPS(string s);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << s.size() - LPS(s) << endl;
    }

    return 0;
}
int LPS(string s)
{
    int n, m;
    n = s.size();
    m = s.size();
    int res = 0;
    string s1 = s;
    reverse(s1.begin(), s1.end());
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
            if (s[i - 1] == s1[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    while (n != 0 && m != 0)
    {
        if (s[n - 1] == s1[m - 1])
        {
            res++;
            n--;
            m--;
        }
        else
        {
            if (dp[n][m - 1] > dp[n - 1][m])
            {
                m--;
            }
            else
            {
                n--;
            }
        }
    }
    return res;
}