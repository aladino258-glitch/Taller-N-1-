#include <iostream>
using namespace std;

float Intercambiar (float A, float B)
{
        float aux;
        aux=A;
        A=B;
        B=aux;
        return A;
};

main()
{
        float A=0, B=0; 
        float nuevoA;  

        cout<<"Ingresa el valor de A: ";
        cin>>A;

        cout<<"Ingresa el valor de B: ";
        cin>>B;

        nuevoA=Intercambiar(A,B);

        cout<<"Nuevo valor de A: "<<nuevoA;
}