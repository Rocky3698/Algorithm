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
        int n, d;
        long long sum = 0;
        cin >> n >> d;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        // if(sum-d<=0){
        //     cout<<0<<endl;
        //     continue;
        // }
        int s1 = (d + sum) / 2;
        if ((d + sum) % 2 == 0)
        {
            long long dp[1005][1005];
            dp[0][0] = 1;
            for (int i = 1; i <= s1; i++)
            {
                dp[0][i] = 0;
            }
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= s1; j++)
                {
                    if (arr[i - 1] <= j)
                    {
                        dp[i][j] = dp[i - 1][j - arr[i - 1]] + dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            cout << dp[n][s1]<<endl;
        }
        else cout<<0<<endl;
    }

    return 0;
}