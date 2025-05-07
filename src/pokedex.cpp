// CONTENEDORES
#include <map>
#include <list>
#include <vector>
// FLUJO DE DATOS
#include <iostream>
#include <fstream>
#include <sstream>
// CADENAS DE TEXTO
#include <string>
using namespace std;

void demo();

enum TipoPokemon{
    FUEGO,
    PLANTA,
    AGUA,
    ELECTRICO,
    VOLADOR,
};

class Pokemon
{
private:
    string nombre;
    list<TipoPokemon> tipos;
public:
    Pokemon();
};

int main(){

    return 0;
}

void demo()
{
    // ARREGLOS CLASICOS (MEMORIA ESTATICA).
    cout<< "1.- Arreglos"<<endl;
    int edades[10];
    edades[0] = 1;
    edades[1] = 10;
    edades[2] = 20;
    edades[3] = 30;
    edades[4] = 40;
    cout << "Edad Numero 1: " << edades[0] << endl; // Acceder a un valor unico
    // CONTENEDORES DE LA LIBRERIA C++
    list<int> listaEdades;
    cout<< "2.- listas"<<endl;
    listaEdades.push_back(1);
    listaEdades.push_back(10);
    listaEdades.push_back(20);
    listaEdades.push_back(30);
    listaEdades.push_back(40);
    // NO SE PUEDE SELECCIONAR UN ELEMENTO UNICO DE FORMA NATURAL
    // YA QUE LA LISTA ESTA DISENADA PARA SER RECORRIDA
    int indice = 0;
    for (auto &&edad : listaEdades)
    {
        cout << " Edad Numero " << indice << " : " << edades[indice] << endl;
        indice++;
    }
    // UTILIZAR ESTRUCTURA DE VECTOR
    // LA CUAL SI SE PUEDE ACCEDER POR ELEMENTO
    cout<< "3.- Vectores"<<endl;
    vector<int> VectorEntero;
    VectorEntero.push_back(1);
    VectorEntero.push_back(2);
    VectorEntero.push_back(3);
    VectorEntero.push_back(4);
    VectorEntero[4] = 5; // Aqui optimizamos el operador[]
    for (int i = 0; i < 5; i++)
    {
        cout << " Edad " << i << " : " << VectorEntero[i] << endl;
    }
}