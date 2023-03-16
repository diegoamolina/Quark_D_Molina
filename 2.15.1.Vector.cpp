#include<iostream>

using namespace std;

class PruebaVector1 {
private:
    int sueldos[5];
public:
    void cargar();
    void imprimir();
};

void PruebaVector1::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout <<"Ingrese valor del sueldo:";
        cin >>sueldos[f];
    }
}

void PruebaVector1::imprimir()
{
    cout <<"Listado de sueldos.";
    cout <<"\n";
    for(int f = 0; f < 5; f++) 
    {
        cout <<sueldos[f];
        cout <<"\n";
    }
}

int main()
{
    PruebaVector1 pv1;
    pv1.cargar();
    pv1.imprimir();
    return 0;
}