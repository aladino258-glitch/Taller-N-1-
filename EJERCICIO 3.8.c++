#include <iostream>
using namespace std;
int main()
{
    int num, minutos, segundos;
    cout << "Ingrese un numero" << endl;
    cin >> num;
    minutos = num / 60;
    segundos = num % 60;
    cout << "La cantidad de minutos es: " << minutos << " : " << segundos << endl;
    return 0;
}
