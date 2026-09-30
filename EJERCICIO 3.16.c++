#include <iostream>
using namespace std;

bool esPrimo(int n)
{
    if (n <= 1 || n % 2 == 0)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    cout << "Ingrese un numero" << endl;
    cin >> num;
    if (num == 0)
    {
        cout << "Cero" << endl;
    }
    else if (num == 1)
    {
        cout << "Unidad" << endl;
    }
    else if (esPrimo(num))
    {
        cout << "Primo" << endl;
    }   
    else if (num >= 30)
    {
        cout << "Mayor a 30" << endl;
    }
    else if (num < 0)
    {
        cout << "Negativo" << endl;
    }   
    else if (num > 0 && (num & (num - 1)) == 0)
    {
        cout << "Potencia de 2" << endl;
    }   
    return 0;
}