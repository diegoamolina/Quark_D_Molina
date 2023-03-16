#include<iostream>

using namespace std;

class PersonasEdades {
private:
    char nombres[2][40];
    int edades[2];
public:
    void cargar();
    void mayoresEdad();
};

void PersonasEdades::cargar()
{
    for(int f=0;f < 2;f++) 
    {
        cout <<"Ingrese nombre:";
        cin.getline(nombres[f],40);
        cout <<"Ingrese edad:";
        cin >>edades[f];
        cin.get();
    }
}

void PersonasEdades::mayoresEdad()
{
    cout <<"Personas mayores de edad.";
    cout <<"\n";
    for(int f=0;f < 2;f++) 
    {
        if (edades[f] >= 18) 
        {
            cout <<nombres[f];
            cout <<"\n";
        }
    }
}

int main()
{
    PersonasEdades pe;
    pe.cargar();
    pe.mayoresEdad();
    return 0;
}