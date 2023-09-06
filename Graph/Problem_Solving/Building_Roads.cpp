#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N=1e5+7;
vector<int>graph[N];
vector<bool>visited(N,false);
void dfs(int u){
    visited[u]=true;
    for(int v:graph[u]){
        if(visited[v])continue;
        dfs(v);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    // int Road=0;
    vector<int>path;
    for(int i=1;i<=n;i++){
        if(visited[i])continue;
        dfs(i);
        // Road++;
        path.push_back(i);
    }
    // cout<<Road-1<<endl;
    cout<<path.size()-1<<endl;
    for(int i=1;i<path.size();i++)
        cout<<path[i-1]<<" "<<path[i]<<endl;
    // cout<<endl<<cc<<endl;
    return 0;
}