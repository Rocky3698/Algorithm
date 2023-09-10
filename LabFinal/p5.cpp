// Write a program to instert elements to an array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000] = {1, 2, 3, 4, 5}, sz = 5;

    cout << "Array before insertion:  ";
    for(int i=0; i<sz; i++) cout << a[i] << " ";
    cout << endl;

    char c = 'Y';
    do
    {
    cout << "Enter the index of insertion: ";
    int x; cin >> x;
    cout << "Enter the value to insert: ";
    int val; cin >> val;

    for(int i=sz; i>x; i--)a[i] = a[i-1];
    sz++;
    a[x] = val;

    cout << "keep inserting? [Y/N]: ";
    cin >> c;
    } while(c=='Y');

    cout << "Array after insertion:  ";
    for(int i=0; i<sz; i++) cout << a[i] << " ";
    cout << endl;

}