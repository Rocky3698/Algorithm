#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
const int N = 1e3 + 7;
int adjM[N][N];
vector<int> adjL[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> adjM[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (adjM[i][j])
                adjL[i].push_back(j);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "node :" << i << " :";
        for (int j : adjL[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}