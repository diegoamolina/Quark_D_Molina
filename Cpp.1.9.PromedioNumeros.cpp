#include<iostream>

using namespace std;

int main()
{
    int x,suma,valor,promedio;
    x=1;
    suma=0;
    while ( x <= 10) 
    {
        cout <<"Ingrese un valor:\n";
        cin >>valor;
        suma=suma+valor;
        x=x+1;
    }
    promedio=suma/10;
    cout <<"La suma de los 10 valores es:\n";
    cout <<suma <<"\n";
    cout <<"El promedio es:\n";
    cout <<promedio<<"\n";
    return 0;
}