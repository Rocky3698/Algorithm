#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void Binary_Search(vector<int> v, int key)
{
    int l = 0, r = v.size() - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (v[mid] == key)
        {
            cout << mid << endl;
            return;
        }
        else if (v[mid] > key)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << "Not Found" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.emplace_back(x);
    }
    int key;
    cin >> key;
    Binary_Search(v, key);
    return 0;
}