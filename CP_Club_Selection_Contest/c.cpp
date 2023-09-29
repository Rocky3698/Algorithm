// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// typedef pair<int, int> pii;
// const int INF = 1e9 + 7;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int c = 0;
//         vector<int> ones;

//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == '1')
//                 c++;
//             else if (c > 0)
//             {
//                 ones.push_back(c);
//                 c = 0;
//             }
//         }
//         if (c > 0)
//             ones.push_back(c);
//         sort(ones.begin(), ones.end(), greater<int>());

//         int zaza = 0;
//         for (int i = 0; i < ones.size(); i += 2)
//             zaza += ones[i];
//         cout << zaza << endl;
//     }

//     return 0;
// }

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
    while (t--)
    {
        string s;
        cin >> s;
        int subO = 0;
        vector<int> Count;
        for (char c : s)
        {
            if (c == '1')
                subO++;
            else
            {
                if (subO != 0)
                    Count.push_back(subO);
                subO = 0;
            }
        }
        if (subO > 0)
            Count.push_back(subO);
        // for (auto v : Count)
        //     cout << v << " ";
        // cout << endl;
        sort(Count.begin(),Count.end());
        int sum=0;
        for (int i = Count.size() - 1; i >= 0; i-=2)
        {
            sum+=Count[i];
            
        }
        cout<<sum<<endl;
    }

    return 0;
}