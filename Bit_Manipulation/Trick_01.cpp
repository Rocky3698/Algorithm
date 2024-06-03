#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i,s,n)for(int i=s;i<n;i++)
typedef pair<int,int>pii;
const int INF=1e9+7;
const int N=1e5+5;
const int M=1e3+5;
int i,j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int arr[n];
    int ans=0;
    For(i,0,n)
    {
        cin>>arr[i];
        ans=ans^arr[i];
        cout<<ans<<endl;
    }
    cout<<ans<<endl;

    // Logic is x^x=0;
    // all even count numbers getting 0 and odd count number remain same
    //1 2 3 1 2 1 2
    // ans =3;
    
    return 0;
}