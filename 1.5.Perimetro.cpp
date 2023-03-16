#include<iostream>

using namespace std;

int main()
{
    float lado, perimetro;
    
    cout << "Ingrese el lado de un cuadrado \n";
    cin >> lado;
    perimetro = lado * 4;
    cout << "El perimetro del cuadrado vale\n";
    cout << perimetro;
    return 0;
}