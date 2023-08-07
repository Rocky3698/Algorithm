#include <bits/stdc++.h>
using namespace std;
int Max = INT_MIN;
int smax = INT_MIN;
void Merge(vector<int> &v, int l, int r, int mid)
{
    vector<int> L, R;
    for (int i = l; i <= mid; i++)
        L.push_back(v[i]);
    for (int i = mid + 1; i <= r; i++)
        R.push_back(v[i]);
    L.push_back(INT_MIN);
    R.push_back(INT_MIN);
    int lp = 0, rp = 0;
    for (int i = l; i <= r; i++)
    {
        if (L[lp] >= R[rp])
        {
            v[i] = L[lp];
            lp++;
        }
        else
        {
            v[i] = R[rp];
            rp++;
        }
        if (l == 0 && r == v.size() - 1)
        {
            if (Max < v[i])
            {
                smax = Max;
                Max = v[i];
            }
            else if (smax < v[i] && v[i] < Max)
                smax = v[i];
        }
    }
}
void MergeSort(vector<int> &v, int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    MergeSort(v, l, mid);
    MergeSort(v, mid + 1, r);
    Merge(v, l, r, mid);
}
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    MergeSort(arr, 0, n - 1);
    if (arr[0] == arr[n - 1])
        return -1;
    else
        return smax;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<findSecondLargest(n,v);
    return 0;
}