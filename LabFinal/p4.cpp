// Write a program to find the largest and smallest values from the array;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array:\n";
    int n;
    cin >> n;
    int a[n];
    cout << "Enter the array:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max = a[0], min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    cout << "Largest Value = " << max << endl;
    cout << "Smallest Value = " << min << endl;

    return 0;
}
