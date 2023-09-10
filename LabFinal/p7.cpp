// Write a program to merge the elements of two arrays into a new array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the size of 1st array: ";
    int n; cin >> n;
    cout << "Enter the 1st array: ";
    int arr1[n];
    for(int i=0; i<n; i++) cin >> arr1[i];

    cout << "Enter the size of 2nd array: ";
    int m; cin >> m;
    cout << "Enter the 2nd array: ";
    int arr2[m];
    for(int i=0; i<m; i++) cin >> arr2[i];

    int merge[n+m];
    int i;
    for(i=0; i<n; i++) merge[i] = arr1[i];
    for(;i-n<m; i++) merge[i] = arr2[i-n];

    cout << "The Merged Array:  ";
    for(int a: merge) cout << a << " ";
    cout << endl;
}