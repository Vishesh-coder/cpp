#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int x = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            x = 1;
            break;
        }
    }

    if (x == 1)
        cout << "Number is not prime";
    else
        cout << "Number is prime";

    return 0;
}