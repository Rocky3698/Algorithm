#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
pair<bool, int> Find(vector<int> v, int key, int l, int r)
{
    if (v[l] == key)
        return {true, l};
    else if (v[r] == key)
        return {true, r};
    if (l == r)
        return {false, -1};
    int mid = (l + r) / 2;
    pair<bool, int> p1 = Find(v, key, l, mid);
    pair<bool, int> p2 = Find(v, key, mid + 1, r);
    if (p1.first)
        return p1;
    else
        return p2;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int key;
    cin >> key;
    pair<bool, int> ans = Find(v, key, 0, v.size() - 1);
    if (ans.first)
        cout << ans.second << endl;
    else
        cout << "Not Found";
    return 0;
}