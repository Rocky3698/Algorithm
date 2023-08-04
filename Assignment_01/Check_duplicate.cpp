#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void Binary_check(vector<int> v, int key)
{
    int l = 0, r = v.size() - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (v[mid] == key)
        {
            if (mid<v.size()-1 && v[mid + 1] == key || mid>0 && v[mid - 1] == key)
            {
                cout << "YES" << endl;
                return;
            }
            else {
                cout<<"NO"<<endl;
                return;
            }
        }
        else if (v[mid] > key)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << "NO" << endl;
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
    Binary_check(v, key);
    return 0;
}