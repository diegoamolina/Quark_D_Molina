#include<iostream>

using namespace std;

int main()
{
    int multiplo, contador, limite;
    multiplo = 8;
    contador = multiplo;
    limite = 500;

    while(contador < limite)
    {
        cout << contador << "\n";
        contador = contador + multiplo;
    }
}