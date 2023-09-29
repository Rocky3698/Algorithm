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
        int n, s, x;
        cin >> n >> s >> x;
        int a[n + 1];
        a[0] = 0;
        for (int i = 1; i <= n; i++)
            a[i] = a[i - 1] + i;
        int l = 1, r = n;
        bool flag = true;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == s)
            {
                flag = false;
                if (mid + 1 == x)
                {
                    cout << "YES" << endl;
                    break;
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else if (a[mid] > s)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if (flag)
            cout << "NO" << endl;
    }
    return 0;
}
