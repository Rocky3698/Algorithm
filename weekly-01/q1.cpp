#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x < 10 && x > 0)
            cout << x << endl;
        else
        {
            int a= x/10;
            if(a>=10){
                string s= to_string(x);
                cout<<(s[0]-48)*10+9<<endl;
            }
            else cout<<x/10+9<<endl;
        }
    }

    return 0;
}