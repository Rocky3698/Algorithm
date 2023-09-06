#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int partition(vector<int> &v, int start, int end)
{

    int pivot = v[end];

    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    i++;
    swap(v[i], v[end]);
    return i;
}

void quickSort(vector<int> &v, int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partition(v, start, end);
        quickSort(v, start, pivotIndex - 1);
        quickSort(v, pivotIndex + 1, end);
    }
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
        v.push_back(x);
    }
    quickSort(v, 0, n - 1);

    for (auto x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}
