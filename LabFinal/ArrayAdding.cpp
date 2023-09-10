#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size of both Array" << endl;
    cin >> size;
    int arr1[size], arr2[size];
    cout << "Enter elemnts of the Array 1" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr1[i];
    cout << "Enter elemnts of the Array 2" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr2[i];
    for (int i = 0; i < size; i++)
        cout << "array1[" << i << "] + array2[" << i << "] = " << arr1[i] + arr2[i] << endl;

    return 0;
}