#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int N = 1e3 + 5;
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
        int n, sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        bool flag = false;
        if (sum % 2 == 0)
        {
            int s = sum / 2;
            bool dp[n + 1][s + 1];
            dp[0][0] = true;
            for (int i = 1; i <= s; i++)
            {
                dp[0][i] = false;
            }
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= s; j++)
                {
                    if ((arr[i - 1] <= j) && (dp[i - 1][j - arr[i - 1]] || dp[i - 1][j]))
                    {
                        dp[i][j] = true;
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            if (dp[n][s])
            {
                flag = true;
            }
        }

        (flag) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
