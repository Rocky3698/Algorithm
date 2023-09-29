#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n];
    int prefix[n + 1];
    int i;
    For(i, 0, n)
    {
        cin >> arr[i];
        prefix[i + 1] = prefix[i] + arr[i];
    }
    int k;
    cin >> k;
    int ans = INT_MIN;
    int x = 0, y = k;
    For(i, 0, n - k + 1)
    {
        ans = max(ans, prefix[y] - prefix[x]);
        x++;
        y++;
        cout << ans << " ";
    }
    cout << ans << endl;

    return 0;
}
// max subarray sum of size k;