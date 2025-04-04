#pragma once
class Foco
{
private:
    bool Encendido;
public:
    Foco(/* args */) {
        Encendido = false;
    }
    ~Foco() {}
    void Encender()
    {
        Encendido = true;
    }
    void Apagar()
    {
        Encendido = false;
    }
    char LeerEstado(){
        if (Encendido)
        return '*';
        else  
        return '-';  
    }
};