#include<iostream>

using namespace std;

class VectorEnteros {
private:
    int numeros[5];
public:
    void cargar();
    void ordenar();
    void imprimir();
    void invertir();
};

void VectorEnteros::cargar()
{
    for(int f=0;f < 5;f++) 
    {
        cout <<"Ingrese un numero entero:\n";
        cin >>numeros[f];
    }
}

void VectorEnteros::ordenar()
{
    for (int k = 0; k < 4; k++)
    {
        for (int f = 0; f < 4 - k; f++)
        {
            if (numeros[f] > numeros[f + 1])
            {
                int aux;
                aux = numeros[f];
                numeros[f] = numeros[f + 1];
                numeros[f + 1] = aux;
            }
        }
    }
}

void VectorEnteros::imprimir()
{
    cout <<"numeros ordenados:";
    cout <<"\n";
    for(int f=0;f < 5;f++) 
    {
        cout <<numeros[f];
        cout <<"\n";
    }
}

void VectorEnteros::invertir()
{
    int temp[5];
    for(int f=0;f < 5; f++)
    {
        temp[4 - f] = numeros[f];
    }
    for(int f=0;f < 5; f++)
    {
        numeros[f] = temp[f];
    }
}

int main()
{
    VectorEnteros os;
    os.cargar();
    os.ordenar();
    os.imprimir();
    os.invertir();
    os.imprimir();
    return 0;
}