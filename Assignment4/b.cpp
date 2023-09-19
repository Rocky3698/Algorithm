#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int N = 1e5 + 1;
const int INF = 1e9 + 7;
bool dp[N];

bool CanReach(int n)
{
    if (n == 1)
        return true;
    dp[1] = true;
    for (int i = 1; i <= n; i++)
    {
        int x = i + 3, y = i * 2;

        if (dp[i])
        {
            if (x <= n)
            {
                dp[x] = true;
            }
            if (y <= n)
            {
                dp[y] = true;
            }
        }
    }
    return dp[n];
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
        int n;
        cin >> n;

        if (CanReach(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
