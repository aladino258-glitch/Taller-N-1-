#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Ingrese tres numeros" << endl;
    cin >> num1 >> num2 >> num3;
    if (num2 > num1 && num3 > num2)
    {
        cout << "Los numeros estan ordenados" << endl;
    }
    else
    {
        cout << "Los numeros no estan ordenados" << endl;
    }
    return 0;
}