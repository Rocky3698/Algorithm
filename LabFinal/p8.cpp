// Write a program to search an element from an array using Linear search

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

    cout << "Enter the searching value ";
    int x;
    cin >> x;

    bool flag = true;
    vector<int> count;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            flag = false;
            count.push_back(i);
        }
    }
    if (flag)
        cout << "Not Found" << endl;
    else
    {
        cout << "Found at index ";
        for (int i : count)
            cout << i << " ";
    }
}