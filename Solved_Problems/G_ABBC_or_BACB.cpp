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
        int A = 0, B = 0;
        string s;
        cin >> s;
        vector<int> count;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (c == 'A')
                A++;
            else
            {
                if (A)
                {
                    count.push_back(A);
                    A = 0;
                }
                B++;
            }
            if (i == s.size() - 1)
                count.push_back(A);
        }

        int ans = 0;
        sort(count.begin(), count.end(), greater<int>());
        if (count.size() && count[0])
        {
            for (int i = 0; i < B; i++)
            {
                if (count.size() > i)
                    ans += count[i];
            }
            cout << ans << endl;
        }
        else
            cout << "0" << endl;
        // for (int x : count)
        //     cout << x << " ";
        // cout << endl;
    }

    return 0;
}