#include <iostream>

using namespace std;
int fibonacci(int n)
{
    if (n <= 1) //caso base
    {
        return n; // f(0) = 0, f(1) = 1
    }

    int f0 = 0, f1 = 1, auxiliar; 

    for (int i = 2; i <= n; i++) 
    {
        auxiliar = f0 + f1; // f(n) = f(n-1) + f(n-2)
        f0 = f1; // f(n-2) = f(n-1)
        f1 = auxiliar;  // f(n-1) = f(n)
    }

    return auxiliar;
}

int main()
{
    int n;

    cin >> n;

    cout << fibonacci(n) << endl;

    return 0;
}