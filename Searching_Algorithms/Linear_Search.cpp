#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int linearSearch(vector<int>v,int key){
    for(int i=0;i<v.size();i++)
        if(v[i]==key)return i;
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int key;
    cin>>key;
    cout<<linearSearch(v,key);
    return 0;
}