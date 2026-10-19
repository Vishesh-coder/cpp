#include <iostream>
using namespace std;

int prime(int n)
{
    int x = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                x = 1;
                break;
            }
        }
        if (x != 1)
        {
            cout << i << " ";
        }
        x = 0;
    }
}

int main()
{
    int n = 0;

    cout << "Print prime numbers from 2 to ";
    cin >> n;

    prime(n);

    return 0;
}