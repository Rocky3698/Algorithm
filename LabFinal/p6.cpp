// Write a program to delete elements from an array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, sz = 10;
    cout << "Array before deletion:  ";
    for(int i=0; i<sz; i++) cout << a[i] << " ";
    cout << endl;

    char c = 'Y';
    do
    {
    cout << "Enter the index of deletion: ";
    int x; cin >> x;

    if(x<sz)
    {
        for(int i=x; i<sz; i++) a[i] = a[i+1];
        sz--;
    }
    else cout << "Invalid Index.\n";

    cout << "keep deleting? [Y/N]: "; cin >> c;
    } while(c=='Y' && sz>0);

    cout << "Array after deletion:  ";
    for(int i=0; i<sz; i++) cout << a[i] << " ";
    cout << endl;

}