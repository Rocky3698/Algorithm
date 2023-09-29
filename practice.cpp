// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// typedef pair<int, int> pii;
// const int N = 1e3 + 5;
// const int INF = 1e9 + 7;
// vector<int> g[N];
// vector<bool> visited(N, false);
// int level[N];
// int height[N];
// void dfs(int u)
// {
//     visited[u] = true;
//     // level[u]=0;
//     for (auto v : g[u])
//     {

//         if (visited[v])
//             continue;
//         level[v] = level[u] + 1;
//         dfs(v);
//         height[u] = max(height[v] + 1, height[u]);
//         // cout << v << " ";
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int n, e;
//     cin >> n >> e;
//     for (int i = 1; i <= e; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         g[u].push_back(v);
//         g[v].push_back(u);
//     }
//     dfs(0);
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << i << " " << level[i] << " " << height[i] << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], s[n + 1];
        s[0] = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s[i + 1] = s[i] + a[i];
        }
        s[n + 1] = 0;
        int s1 = 0, s2 = 0;
        for (int i = 1; i <= n; i++)
        {
            s1 = s[i - 1];
            s2 = s[n] - s[i];
            if (s1 == s2)
                break;
        }
        if (s1 == s2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}