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
int freq[1000001]={0};
For(i,0,n)
{
    cin>>arr[i];
    freq[arr[i]]++;
}
    int k;
    cin>>k;
    cout<<freq[k]<<endl;
    //count of k in freq[k];
    

    return 0;
}