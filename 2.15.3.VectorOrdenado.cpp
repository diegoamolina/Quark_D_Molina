#include<iostream>

using namespace std;

class vectorInt 
{
    private:
        int vec[10];
    public:
        void cargar();
        void verificar(); 
};

void vectorInt::cargar()
{
    for(int contador = 0;contador < 10; contador++)
    {
        cout << "Ingrese un numero entero\n";
        cin >> vec[contador];
    }
}

void vectorInt::verificar()
{
    int temp = vec[0];
    bool ordenado = true;
    for(int contador = 1;contador < 10; contador++)
    {
        if(temp > vec[contador] )
        {
            ordenado = false;
            break;
        }
        temp = vec[contador];
    }
    if(ordenado)
    {
            cout << "Los numeros estan ordenados de menor a mayor\n";
    }
    else    cout << "Los numeros estan desordenados\n";
    
}

int main ()
{
    vectorInt vec1;
    vec1.cargar();
    vec1.verificar();
}