#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int,int>pii;
const int INF=1e9+7;
const int N=1e5+5;
vector<int> adj[N];
bool visited[N];
void dfs(int s){
    visited[s]=true;
    for(int v:adj[s]){
        if(visited[v])continue;
        dfs(v);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,e;
    cin>>n>>e;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mp[s]=i;
    }
    // for(auto x:mp) cout<<x.second<<endl;
    for(int i=1;i<=e;i++){
        string s1,s2;
        cin>>s1>>s2;
        adj[mp[s1]].push_back(mp[s2]);
        adj[mp[s2]].push_back(mp[s1]);
    }
    // for(auto v:adj){
    //     for(auto x:v){
    //         cout<<x<<" ";
    //     }
    //     cout<<endl;
    // }
    int cc=0;
    for(int i=0;i<n;i++){
        if(!visited[i])
        {
            dfs(i);
            cc++;
        }
    }
    cout<<cc<<endl;
    return 0;
}