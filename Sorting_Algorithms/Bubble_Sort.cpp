#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void Bubble_Sort(vector<int> &v)
{
    int counter = 1;
    while (counter < v.size())
    {
        for (int i = 0; i < v.size() - counter; i++)
        {
            if (v[i] > v[i + 1])
            {
                int temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
            }
        }
        counter++;
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
    Bubble_Sort(v);
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}