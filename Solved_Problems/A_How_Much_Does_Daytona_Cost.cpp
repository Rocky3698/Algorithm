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
        int arr[n];
        int freq[101] = {0};
        bool flag = false, found = false;
        int prev, curr;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
            if (arr[i] == k)
            {
                flag = true;
            }

        }
   
        (flag) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
