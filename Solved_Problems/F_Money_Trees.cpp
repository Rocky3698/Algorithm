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
        int n,k;cin>>n>>k;int w[n],h[n];
        For(i,0,n)cin>>w[i];
        For(i,0,n)cin>>h[i];
        if (n == 1 && w[0] <= k)
        {
            cout << "1" << endl;
            continue;
        }
        // cout<<w[0]<<" "<<w[n-1]<<h[0]<<" "<<h[n-1];
        i=0,j=0;int l=0,temp=k,ans=INT_MIN;
        while(j<n-1)
        {
            if(h[j]%h[j+1]==0)
            {
                if(w[j]<=k)
                {
                    k-=w[j];
                    l++;
                }
                else
                {
                    k+=w[i];
                    k-=w[j];
                    i++;
                }
            }
            else{
                if(w[j]<=k)ans=max(ans,l+1);
                l=0;
                i=j+1;
                k=temp;
            }
            if(j==n-2&&w[j+1]<=k)l++;
            ans=max(ans,l);
            j++;
        }
        cout<<max(ans,l)<<endl;
    }

    return 0;
}