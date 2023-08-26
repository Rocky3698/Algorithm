#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        if (x >= y || n <= 2)
        {
            cout << "-1" << endl;
            break;
        }
        bool flag = false;
        vector<int> v;
        v.push_back(y);
        for (int i = n - 2, j = 1; i > 0; i--, j++)
        {

            v.push_back(v[j - 1] - j);
        }
        v.push_back(x);
        reverse(v.begin(), v.end());
        if (v[1] - v[0] <= v[2]-v[1])
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto x : v)
                cout << x << " ";
            cout << endl;
        }
    }

    return 0;
}