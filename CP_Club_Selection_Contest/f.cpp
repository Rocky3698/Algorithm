// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"

// const int N = 1e2 + 5;
// vector<int> adj[N];
// bool visited[N];
// int level[N];

// void bfs(int s)
// {
//     queue<int> q;
//     q.push(s);
//     visited[s] = true;
//     level[s] = 0;

//     while (!q.empty())
//     {
//         int u = q.front();
//         q.pop();
//         for (int v : adj[u])
//         {
//             if (visited[v] == true)
//                 continue;
//             q.push(v);
//             visited[v] = true;
//             level[v] = level[u] + 1;
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int n, m;
//     cin >> n >> m;

//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     int x, y, k;
//     cin >> x >> y >> k;

//     bfs(x);
//     if (visited[y])
//     {
//         if(level[y]<=k*2)cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     else
//         cout << "NO" << endl;
//     // for (int i = 0; i <= n; i++)
//     // {
//     //     cout << "Level of " << i << ": " << level[i] << endl;
//     // }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
int dp[1005][1005];
int subset_sum(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return 1;
        else
            return 0;
    }
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        int op1 = subset_sum(n - 1, a, s - a[n - 1]);
        int op2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op1 + op2;
    }
    else
    {
        return dp[n][s] = subset_sum(n - 1, a, s);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, d, sum = 0;
        cin >> n >> d;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int s1 = (d + sum) / 2;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=s1;j++){
                dp[i][j]=-1;
            }
        }
        cout<<subset_sum(n,arr,s1);
    }

    return 0;
}