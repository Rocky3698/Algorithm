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
    // int x=5;
    // int w1=floor(x/2.0);
    // int w2=ceil(x/2.0);
    // cout<<w1<<" "<<w2<<endl;
    while (t--)
    {
        int n;
        cin >> n;
        long long w = 0;
        priority_queue<long long> pq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            w += x;
            pq.push(x);
        }
        queue<long long> q;
        q.push(w);
        int op = 0;
        while (true)
        {
            if (op == n - 1)
                break;
            if (q.empty() || pq.empty())
                break;
            long long x = q.front();
            q.pop();
            if (x == pq.top())
            {
                pq.pop();
                continue;
            }
            long long w1 = floor(x / 2.0); // cout<<w1<<endl;
            long long w2 = ceil(x / 2.0);  // cout<<w2<<endl;
            if (w1 == pq.top())
                pq.pop();
            else
                q.push(w1);
            if (w2 == pq.top())
                pq.pop();
            else
                q.push(w2);
            op++;
        }
        while (!q.empty())
        {
            if (q.front() == pq.top())
                pq.pop();
            q.pop();
        }
        if (pq.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}