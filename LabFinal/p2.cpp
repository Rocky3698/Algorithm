//Write a program to add two arrays

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the arrays:\n";
    int n; cin >> n;
    int a[n], b[n];

    cout << "Enter the array a:\n";
    for(int i=0; i<n; i++) cin >> a[i];

    cout << "Enter the array b:\n";
    for(int i=0; i<n; i++) cin >> b[i];
    cout << endl;

    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]+b["<<i<<"] = "<< a[i]+b[i] << endl;
    }

    return 0;
}
