#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double base, altura, superficie, triangulosDeseados, triangulosGrandes, contador;
    triangulosGrandes = 0;
    cout << "Ingrese la cantidad de triangulos que desea ingresar\n";
    cin >> triangulosDeseados;
    for(contador = 0; contador < triangulosDeseados; contador++)
    {
        cout << "Ingrese la base del triangulo\n";
        cin >> base;
        cout << "Ingrese la altura del triangulo\n";
        cin >> altura;

        superficie = base * altura / 2;
        if(superficie > 12.0) 
        {
            triangulosGrandes++;
        }
        cout << "El triangulo tiene una base de " << base <<"\nUna altura de " << altura << "\n Y una superficie de " << superficie << "\n";
    }
    cout << "La cantidad de triangulos mayores a 12 es " << triangulosGrandes << "\n";
    
}