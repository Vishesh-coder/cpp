#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n = 0;
    cout << "Enter a Positive Number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Not possible";
    }
    else
    {
        cout << "The nth Fibonacci Number is " << fibonacci(n) << endl;
    }

    return 0;
}