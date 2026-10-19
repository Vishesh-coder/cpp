#include <iostream>
using namespace std;

int sumofdig(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n = 0;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of Digits: " << sumofdig(n) << endl;

    return 0;
}