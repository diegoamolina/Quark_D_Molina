#include<iostream>
#include <cstdlib>
#include <cstring>

using namespace std;



class paisesPob {
private:
    char paises[5][40];
    int poblacion[5];
public:
    void cargar();
    void ordenar();
    void imprimir();
};

void paisesPob::cargar()
{
    cout << "Ingrese el nombre de 5 paises\n";
    for(int contador=0; contador < 5; contador++)
    {
        cin.getline(paises[contador],40);
        //cin.get();
        poblacion[contador] = rand();
    }
}

void paisesPob::imprimir()
{
    cout << "Los paises ingresados son:\n";
    cout << "Pais\tPoblacion\n";
    for(int contador=0; contador < 5; contador++)
    {
        cout << paises[contador] << "\t" <<  poblacion[contador] << "\n";
    }

}

void paisesPob::ordenar()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            if(poblacion[j] < poblacion[j+1])
            {
                int pobtemp; 
                pobtemp = poblacion[j];
                poblacion[j] = poblacion[j+1];
                poblacion[j+1] = pobtemp;

                char paistemp[40];
                strcpy_s(paistemp,40, paises[j]);
                strcpy_s(paises[j],40, paises[j+1]);
                strcpy_s(paises[j+1],40, paistemp);
            }
        }
        
    }
    
}

int main()
{
    paisesPob lista;
    lista.cargar();
    lista.imprimir();
    lista.ordenar();
    lista.imprimir();
    return 0;
}