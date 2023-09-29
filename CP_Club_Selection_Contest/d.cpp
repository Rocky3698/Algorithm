#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int,int>pii;
const int INF=1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1)cout<<j;
            else if((i>1&&i<n)){
                if(j==1)cout<<i;
                else if(j==n)cout<<n;
                else cout<<" ";
            }
            else if(i==n)cout<<i;
        }
        cout<<endl;
    }

    return 0;
}