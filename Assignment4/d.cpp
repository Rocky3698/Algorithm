#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e3 + 5;
int dp[N][N];

bool ss(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return true;
        else
            return false;
    }
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }

    bool o1 = ss(n - 1, a, s); // exclude
    if (a[n - 1] <= s)
    {
        bool o2 = ss(n - 1, a, s - a[n - 1]); // include
        return (dp[n][s] = (o1 || o2));
    }
    else
    {
        return (dp[n][s] = o1);
    }
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
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int target = 1000 - m;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j <= target; j++)
                dp[i][j] = -1;
        }

        if (ss(n, arr, target))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}