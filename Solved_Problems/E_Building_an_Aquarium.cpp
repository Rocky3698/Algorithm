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

    int t;cin>>t;
    while(t--){
    int n,w;
    cin>>n>>w;
    int arr[n];
    For(i,0,n)cin>>arr[i];
    long long l=1,r=1e10,mid;
    while(l<=r){
        mid=(l+r)/2;
        long long watter=0;
        For(i,0,n)if(mid>arr[i])watter+=(mid-arr[i]);
        if(watter==w)break;
        else if(watter>w)r=mid-1;
        else l=mid+1;
    }
    cout<<(l+r)/2<<endl;
    }

    return 0;
}