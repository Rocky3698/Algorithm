#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elemnts of the Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (!i)
            cout << "The elemnts of the array are : ";
        cout << arr[i]<<" ";
    }
    return 0;
}