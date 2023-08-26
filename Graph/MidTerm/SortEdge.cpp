#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int N = 1e3 + 5;
const int INF = 1e9 + 7;
bool cmp(pii a, pii b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<pii> v;
    int e;
    cin >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}