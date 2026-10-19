#include <iostream>
#include <cmath>
using namespace std;

int d2b(int n)
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

int b2d(int n)
{
    int decnum = 0, i = 0, pow2 = 1;
    while (n != 0)
    {
        decnum += (n % 10) * pow2;
        n = n / 10;
        pow2 *= 2;
        i++;
    }

    return decnum;
}

int main()
{
    int d_num = 0, bi_num = 0, n = 0;
    cout << "Choose an operation: " << endl;
    cout << "Decimal to Binary (0)" << endl;
    cout << "Binary to Decimal (1)" << endl;
    cout << "Enter the Choice (0 or 1): ";
    cin >> n;
    if (n == 0)
    {
        cout << "Enter a decimal number: ";
        cin >> d_num;
        cout << "Binary Number of " << d_num << ": " << d2b(d_num) << endl;
    }
    else
    {
        cout << "Enter a binary number: ";
        cin >> bi_num;
        cout << "Decimal Number of " << bi_num << ": " << b2d(bi_num) << endl;
    }
}