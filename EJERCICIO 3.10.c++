#include <iostream>
using namespace std;
#define M 6;
int main()
{
    int A, B, C;
    cout << "Ingrese los dos numeros" << endl;
    cin >> A >> B;
    C = 2 * A - B;
    C = C - M;
    B = A + C - M;
    A = B * M;
    cout << "A: " << A << endl;
    B = -1;
    cout << "B: " << B << endl;
    cout << "C: " << C << endl;
    return 0;
}