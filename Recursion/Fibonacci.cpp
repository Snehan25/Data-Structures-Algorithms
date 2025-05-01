// #28 - Let's code Fibonacci

#include <iostream>
using namespace std;

// iterative
int fibI(int n)
{
    int t0 = 0, t1 = 1, s;

    if (n <= 1)
    {
        return n;
    }

    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

// recursive
int fibR(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibR(n - 2) + fibR(n - 1);
    }
}

// using memoization
int f[10];

int fibM(int n)
{

    if (n <= 1)
    {
        f[n] = n;
        return n;
    }

    else
    {
        if (f[n - 2] == -1)
        {
            f[n - 2] = fibM(n - 2);
        }
        if (f[n - 1] == -1)
        {
            f[n - 1] = fibM(n - 1);
        }

        f[n] = f[n - 2] + f[n - 1];
        return f[n - 2] + f[n - 1];
    }
}

int main()
{

    for (int i = 0; i < 10; i++)
    {
        f[i] = -1;
    }
    cout << fibI(7) << ' ' << fibR(7) << ' ' << fibM(7);
    return 0;
}
