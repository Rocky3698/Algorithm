
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

    string s1, s2;
    while (cin >> s1 >> s2)
    {
        int p = 0;
        bool flag = false;
        for (char c : s1)
        {
            if (c == s2[p])
            {
                p++;
            }
            if (p == s2.size())
            {
                flag = true;
                break;
            }
        }
        flag ? cout << "Possible" << endl : cout << "Impossible" << endl;
    }
    return 0;
}