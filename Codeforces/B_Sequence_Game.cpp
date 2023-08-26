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
        int size;
        cin >> size;
        vector<int> v(size);
        vector<int> ans;
        for (int i = 0; i < size; i++)
            cin >> v[i];

        ans.push_back(v[0]);
        for (int i = 1; i < size; i++)
        {
            ans.push_back(v[i]);
            if (v[i] < v[i - 1])
                ans.push_back(v[i]);
        }
        // ans.push_back(v[size-1]);
        cout << ans.size() << endl;
        for (int x : ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}