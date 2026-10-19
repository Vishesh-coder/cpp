#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (j = 1; j <= 2 * (n - i); j++)
        {
            cout << "  ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        for (j = 1; j <= 2 * (i - 1); j++)
        {
            cout << "  ";
        }
        for (k = 1; k <= n - i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}