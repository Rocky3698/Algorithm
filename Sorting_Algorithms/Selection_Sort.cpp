#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void Selection_Sort(vector<int>&v){
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[j]<v[i]){
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    Selection_Sort(v);
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}