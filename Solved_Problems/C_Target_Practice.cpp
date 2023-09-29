#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef pair<int, int> pii;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string arr[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
        int arr1[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                arr1[i][j] = 0;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (arr[i][j] == 'X')
                {
                    if ((i >= 4 && i <= 5) && (j >= 4 && j <= 5))
                        arr1[i][j] = 5;
                    else if ((i >= 3 && i <= 6) && (j >= 3 && j <= 6))
                        arr1[i][j] = 4;
                    else if ((i >= 2 && i <= 7) && (j >= 2 && j <= 7))
                        arr1[i][j] = 3;
                    else if ((i >= 1 && i <= 8) && (j >= 1 && j <= 8))
                        arr1[i][j] = 2;
                    else
                        arr1[i][j] = 1;
                }
                else
                    arr1[i][j] = 0;
            }
        }
        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                // cout << arr1[i][j];
                if (arr1[i][j])
                {
                    sum += arr1[i][j];
                }
            }
            // cout << endl;
        }
        cout << sum << endl;
    }

    return 0;
}