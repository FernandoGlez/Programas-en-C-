#include <iostream>

using namespace std;

// PROGRAMA QUE IMPRIME UNA lISTA DE EDADES Y MODIFICAMOS SU VALOR , ASIGNANDO UN VALOR AL INDICE 0
int main() {
    int edad = 0;
    edad = 18;
    const char letra = 'A';
    int listaEdades[] = {18, 24, 16, 45};
    listaEdades[1] = 26;
    cout << edad << endl;
    cout << letra << endl;
    cout << listaEdades[1];
}