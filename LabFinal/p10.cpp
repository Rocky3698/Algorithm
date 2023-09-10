// Write a program to sort an unsorted list using Bubble sort:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter size: ";
    int n;
    cin >> n;
    int a[n];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int pass = 1;
    while (pass < n)
    {
        for (int i = 0; i < n - pass; i++)
        {
            if (a[i] > a[i + 1])
                swap(a[i], a[i + 1]);
        }
        pass++;
    }
    cout<<"The sorted array is:"<<endl;
    for (int i : a)
        cout << i << " ";
    cout << endl;

    return 0;
}