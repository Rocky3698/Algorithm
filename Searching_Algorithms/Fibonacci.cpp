#include <iostream>
using namespace std;
int printFibonacci(int n)
{
    int steps = 0;
    int a = 0, b = 1, next;
    cout << "Fibonacci Series: " << a << ", " << b;
    for (int i = 2; i < n; i++)
    {
        steps++;
        next = a + b;
        cout << ", " << next;
        a = b;
        b = next;
    }
    cout << endl;
    return steps;
}

int main()
{
    int steps;
    cin >> steps;
    int complexity = printFibonacci(steps);
    cout << "Steps taken by the algorithm is: " << complexity << endl;
    return 0;
}
