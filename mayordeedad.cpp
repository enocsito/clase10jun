#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n;
    int *apuntador = &n;
    cout << "Ingrese su edad: ";
    cin >>  *apuntador;

    if (*apuntador >= 18)
    {
        cout << "Usted es mayor de edad y su edad es: " << *apuntador << "\n";
    }
    else
    {
        cout << "Usted no es mayor de edad y su edad es: " << *apuntador << "\n";
    }

    

    delete [] apuntador;
    apuntador = NULL;

    cout << "El espacio de memoria que ocupa el puntero es: " << &apuntador << "\n";


    return 0;
}