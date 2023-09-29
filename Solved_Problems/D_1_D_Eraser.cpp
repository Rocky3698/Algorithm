#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        // bool flag1 = false, flag2 = false;
        // int start, end;
        vector<int> v;
        int op = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                op++;
                i+=m-1;
            }
        }
        // for(int i=0;i<v.size();i++){

        // }
        cout << op << endl;
        // cout<<endl;
    }

    return 0;
}