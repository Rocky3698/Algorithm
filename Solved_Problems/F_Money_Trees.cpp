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
        int n, k;
        cin >> n >> k;
        int arr[n], h[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            cin >> h[i];
        if (n == 1 && arr[0] <= k)
        {
            cout << "1" << endl;
            continue;
        }
        int l = 0;
        int temp = k;
        vector<int> len;
        int lp = 0;
        for (int i = 0; i < n - 1; i++)
        {
            // if (k <= 0)
            //     break;
            if (h[i] % h[i + 1] == 0)
            {
                if (k >= arr[i])
                {
                    k -= arr[i];
                    l++;
                }
                else if (k + arr[lp] >= arr[i])
                {
                    k += arr[lp];
                    k -= arr[i];
                    lp++;
                    // l++;
                }
                else
                {
                    len.push_back(l);
                    k += arr[lp];
                    lp++;
                    l--;
                    // if (k >= arr[i])
                    // {
                    //     l++;
                    //     k -= arr[i];
                    //     continue;
                    // }
                }
            }
            else
            {
                lp = i + 1;
                if (k >= arr[i])
                    len.push_back(l + 1);
                else
                    len.push_back(l);
                l = 0;
                k = temp;
            }
            if (i == n - 2)
            {
                if (k >= arr[n - 1])
                    len.push_back(l + 1);
                else
                    len.push_back(l);
            }
        }
        if (len.size() == 0)
        {
            cout << "0" << endl;
            continue;
        }
        int m = INT_MIN;
        for (auto x : len)
            if (x > m)
                m = x;

        cout << m << endl;
    }
    return 0;
}