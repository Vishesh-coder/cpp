#include <iostream>
#include <cmath>
using namespace std;

int binary(int n)
{
    int binum = 0, i = 0, pow10 = 1;
    while (n != 0)
    {
        binum += (n % 2) * pow10;
        n = n / 2;
        pow10 *= 10;
        i++;
    }

    return binum;
}

int main()
{
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Binary Number of " << n << ": " << binary(n) << endl;
}