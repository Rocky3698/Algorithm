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
        int n;
        cin >> n;
        vector<pii> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back({x, i});
        }
        sort(v.begin(), v.end());
        // for (auto p : v)
        // {
        //     cout << p.first << " " << p.second << endl;
        // }
        // cout << endl;
        cout<<min(v[v.size()-1].second,v[v.size()-2].second)<<" "<<max(v[v.size()-1].second,v[v.size()-2].second)<<endl;
    }

    return 0;
}