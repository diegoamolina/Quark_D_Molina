#include<iostream>

using namespace std;

int main()
{
    int mul3,mul5,valor,f;
    mul3=0;
    mul5=0;
    for(f=1; f <= 10 ;f++) 
    {
        cout <<"Ingrese un valor:";
        cin >>valor;
        if (valor%3 == 0) 
        {
            mul3=mul3+1;
        } 
        if (valor%5 == 0) 
        {
            mul5=mul5+1;
        }
    }
    cout <<"Cantidad de valores ingresados múltiplos de 3:";
    cout <<mul3;
    cout <<"\n";
    cout <<"Cantidad de valores ingresados múltiplos de 5:";
    cout <<mul5;
    return 0;
}