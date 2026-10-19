#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fac(n - 1);
    }
}

int main()
{
    int n = 0;
    int r = 0;

    cout << "Enter value of r & n for nCr" << endl;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    if (n >= r)
    {
        cout << "Value of nCr: " << fac(n) / (fac(r) * fac(n - r)) << endl;
    }
    else
    {
        cout << "nCr not possible";
    }

    return 0;
}