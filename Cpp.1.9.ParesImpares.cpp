#include<iostream>

using namespace std;

int main()
{
    int pares, impares, cantidad, valor, contador;
    cout << "Ingrese la cantidad de numeros que desea ingresar\n";
    cin >> cantidad;
    pares = impares = contador = 0;
    while(contador < cantidad)
    {
        cout << "Ingrese un número entero\n";
        cin >> valor;
        if(typeid(valor) != typeid(int))
        {
            cout << "Error: El número ingresado no es entero\n";
        }
        else
        {
            if(valor %2 == 0)
            {
            ++pares;
            }
            else if((valor %2 + 1) == 0)
            {
                ++impares;
            }
            ++contador;
        }
    }
    cout << "Cantidad de numeros impares:\n";
    cout << impares << "\n";
    cout << "Cantidad de numeros pares:\n";
    cout << pares << "\n";
    return 0;    
}