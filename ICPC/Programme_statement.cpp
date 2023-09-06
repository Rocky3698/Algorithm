#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int N = 1e3 + 5;
const int INF = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<char, int> mp;
    for (char c = 'a'; c <= 'z'; c++)
        mp[c] = 0;

    int p;
    cin >> p;
    vector<int> T(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> T[i];
    }
    int pT;
    cin >> pT;
    cin.ignore();
    vector<queue<string>> st(p + 1);
    int end = 1;
    string s1 = "end";
    while (end <= p)
    {
        string s;
        getline(cin, s);
        if (s == s1)
        {
            end++;
            continue;
        }
        st[end].push(s);
    }

    int sze = 0;
    for (auto q : st)
    {
        sze += q.size();
    }
    // cout<<sze;
    while (sze)
    {
        for (int i = 1; i <= p; i++)
        {
            if (st[i].empty())
                continue;
            string s = st[i].front();
            st[i].pop();
            sze--;
            cout << s << endl;
        }
    }

    return 0;
}