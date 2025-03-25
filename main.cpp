#include <iostream>
#include "foco.hpp"
using namespace std;
int main(int argc, char const *argv[])
{
    Foco focos[10];
    for (size_t i = 0; i < 10; i++)
    {
        focos[i].Encender();
        
    }
    


    foco1.Encender();
    cout << "Foco 1: "
         << foco1.LeerEstado()
         << endl;
    cout << "argc:"
         << argc
         << endl;
    return 0;
}