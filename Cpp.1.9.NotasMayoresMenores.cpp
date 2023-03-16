#include<iostream>

using namespace std;

int main()
{
    int mayores, menores, cantidad, valor, contador;
    cantidad = 10;
    mayores = menores = contador = 0;
    while(contador < cantidad)
    {
        cout << "Ingrese una nota entre 1 y 10\n";
        cin >> valor;
        if(valor < 1)
        {
            cout << "Error: nota invalida\n";
        }
        else if(valor > 10)
        {
            cout << "Error: nota invalida\n";
        }
        else
        {
            if(valor < 7)
            {
                ++menores;
            }
            else
            {
                ++mayores;
            }
        }
        ++contador;
    }
    cout << "Cantidad de notas menores a 7:\n";
    cout << menores << "\n";
    cout << "Cantidad de notas mayores o iguales a 7:\n";
    cout << mayores << "\n";
    return 0;    
}