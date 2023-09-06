#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

vector<int> v;

void merge(int l, int mid, int r)
{
    vector<int> L, R;
    for (int i = l; i <= mid; i++)
        L.emplace_back(v[i]);
    for (int i = mid + 1; i <= r; i++)
        R.emplace_back(v[i]);
    L.emplace_back(INT_MIN);
    R.emplace_back(INT_MIN);
    int lp = 0, rp = 0;
    for (int i = l; i <= r; i++)
    {
        if (L[lp] >= R[rp])
        {
            v[i] = L[lp];
            lp++;
        }
        else
        {
            v[i] = R[rp];
            rp++;
        }
    }
}
void mergeSort(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, mid, r);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.emplace_back(x);
    }
    mergeSort(0, v.size() - 1);
    for (int x : v)
        cout << x << " ";

    return 0;
}