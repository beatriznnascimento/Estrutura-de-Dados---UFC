#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void vetor(vector<int> a, int n)
{
    if (n == 1)
    {
        cout << a[n - 1] << " ";
    }
    else
    {
        vet(a, n - 1);
        cout << a[n - 1] << " ";
    }
}

void rvet(vector<int> a, int n)
{
    if (n == 1)
    {
        cout << a[n - 1] << " ";
    }
    else
    {
        cout << a[n - 1] << " ";
        rvet(a, n - 1);
    }
}

int somavet(vector<int> a, int n)
{
    if (n == 1)
    {
        return a[n - 1];
    }
    else
    {
        return a[n - 1] + somavet(a, n - 1);
    }
}

int multvet(vector<int> a, int n)
{
    if (n == 1)
    {
        return a[n - 1];
    }
    else
    {
        return a[n - 1] * multvet(a, n - 1);
    }
}

int minvet(vector<int> a, int n)
{
    if (n == 1)
    {
        return a[n - 1];
    }
    else
    {
        int minimo = minvet(a, n - 1);
        if (minimo < a[n - 1])
        {
            return minimo;
        }
        else
        {
            return a[n - 1];
        }
    }
}

int main()
{

    string linha;
    getline(cin, linha);
    stringstream ss(linha);

    vector<int> vet;
    int val;

    while (ss >> val)
        vet.push_back(val);

    cout << "vet : [ ";
    vetor(vet, vet.size());
    cout << "]";
    cout << endl;

    // imprime o vetor ao contrairo
    cout << "rvet: [ ";
    rvet(vet, vet.size());
    cout << "]";
    cout << endl;

    // impre a soma do vetor
    cout << "sum : " << somavet(vet, vet.size()) << endl;
    // imprime a mult do vetor
    cout << "mult: " << multvet(vet, vet.size()) << endl;
    // imprime o menor do vetor
    cout << "min : " << minvet(vet, vet.size()) << endl;
    // imprime o vetor asdoasod
    cout << "inv : [ ";
    rvet(vet, vet.size());
    cout << "]";
    cout << endl;
}