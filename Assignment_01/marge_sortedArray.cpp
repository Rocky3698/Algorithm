#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

void merge(vector<int> &arr1, vector<int> &arr2, vector<int> &result)
{
    arr1.emplace_back(INT_MIN);
    arr2.emplace_back(INT_MIN);
    int lp = 0, rp = 0;
    for (int i = 0; i < arr1.size() + arr2.size() - 2; i++)
    {
        if (arr1[lp] >= arr2[rp])
        {
            result.emplace_back(arr1[lp]);
            lp++;
        }
        else
        {
            result.emplace_back(arr2[rp]);
            rp++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n;
    vector<int> arr1;
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.emplace_back(x);
    }
    cin >> m;
    vector<int> arr2;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr2.emplace_back(x);
    }
    merge(arr1, arr2, result);
    for (int x : result)
        cout << x << " ";
    cout << endl;
    return 0;
}