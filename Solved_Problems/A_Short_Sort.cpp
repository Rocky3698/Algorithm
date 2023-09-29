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
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='a'||s[1]=='b'||s[2]=='c')cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}