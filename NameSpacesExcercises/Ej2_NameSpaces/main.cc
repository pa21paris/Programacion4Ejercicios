#include <iostream>
#include "Coordenada.hh"

using namespace std;
int main() {
    int x, y;
    cout << "Ingrese la coordenada x = ";
    cin >> x;
    cout << "Ingrese la coordenada y = ";
    cin >> y;
    binario::Coordenada binC(x,y);
    cout << "Ud. ha ingresado una coordenada binaria = (" << binC.getX() << ", "<< binC.getY() << ")" << endl;
    // Se pasa la coordenada binaria leida a una coordenada ternaria.
    ternario::Coordenada ternC(x, y, 0);
    cout << "La coordenada ingresada transformada a ternaria = (" << ternC.getX() << ", "<< ternC.getY() << ", " << ternC.getZ() << ")" << endl;
    return 0;
} 