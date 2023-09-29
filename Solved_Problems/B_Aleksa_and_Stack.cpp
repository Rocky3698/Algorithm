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
        int max = 1e9;
        // cout << max;
        int n;
        cin >> n;
        stack<int> s;
        s.push(max-1);
        for (int i = 1; i < n; i++)
            s.push(s.top() - 2);

        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }

    return 0;
}