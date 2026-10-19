#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
        return n * fac(n - 1);
}

int main()
{
    int n = 0;
    cout << "Enter a Number: ";
    cin >> n;

    cout << "Factorial of the number: " << fac(n) << endl;

    return 0;
}