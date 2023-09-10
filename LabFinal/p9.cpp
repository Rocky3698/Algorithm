// Write a program to search an elemeent from a list using binary search

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter size: ";
    int n; cin >> n;

    int a[n];
    cout << "Enter elements:"<<endl;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    cout << "Enter the searcing value";
    int x; cin >> x;
    int l=0,r=n-1,mid;
    while(l<r)
    {
        mid=(l+r)/2;
        if(a[mid]==x){
            cout<<x<<" is found at position "<<mid<<endl;
            return 0;
        }
        else if(a[mid]>x)l=mid+1;
        else r=mid-1;
    }
    cout<< x << " is not present in the data set"<<endl;
    return 0;
}