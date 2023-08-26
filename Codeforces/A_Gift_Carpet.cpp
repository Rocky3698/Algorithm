#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        vector<string> v;
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            string a;
            cin >> a;
            v.push_back(a);
        }
        string ans = "vika";
        int ind = 0;
        bool f = false;
        bool done = false;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (v[j][i] == ans[ind])
                {
                    ind++;
                    if (ind == 4)
                    {
                        cout << "YES" << endl;
                        done = true;
                        f = true;
                    }
                    else
                        break;
                }
            }
            if (done)
                break;
        }
        if (!f)
            cout << "NO" << endl;
    }

    return 0;
}