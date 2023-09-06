#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // priority_queue<int> pq; // max heap
    priority_queue<int, vector<int>, greater<int>> pq;//min heap
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    while (!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}