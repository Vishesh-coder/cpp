#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        int a = 0;
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            if (k <= i)
            {
                a++;
            }
            else
            {
                a--;
            }
            cout << a;
        }
        cout << endl;
    }

    return 0;
}