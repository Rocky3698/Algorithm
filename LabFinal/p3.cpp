// Write a program to take some values into an array and calculate the average

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array:\n";
    float n;
    cin >> n;
    int a[(int)n];
    float sum = 0;
    cout << "Enter the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << "Average of the array = " << sum / n << endl;
    return 0;
}
