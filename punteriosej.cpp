#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

    int x;
    int *apuntador = &x;
    cout << "Ingrese un numero entero: ";
    cin >>  *apuntador;

    delete [] apuntador;
    apuntador = NULL;

    cout << "Usted ingreso el numero: " << x << "\n";
    cout << "Usted ingreso el numero: " << &apuntador << "\n";
    return 0;
}