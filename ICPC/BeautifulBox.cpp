#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int N = 1e3 + 5;
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
        int n, m;
        vector<int> v, temp;
        cin >> n >> m;
        for (int i = 0; i < n * m; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            temp.push_back(x);
        }
        sort(temp.begin(), temp.end(), greater<int>());
        temp.resize(n + m -1);
        // for (int x : temp)
        //     cout << x << " ";
        // cout << endl;
        vector<int>ans;
    }

    return 0;
}