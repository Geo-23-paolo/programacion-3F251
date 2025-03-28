#pragma once
class Foco
{
private:
    bool Encendido;
    void ApagarTodo();
    void Apagar();
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
    bool LeerEstado()
    {
        if(Encendido)
        return"*";
        else
        return"-";
    }
};