class Foco
{
private:
    bool estadoActual;

public:
    Foco(/* args */) {
        estadoActual=false;
    }
    ~Foco() {}
    void Encender()
    {
        estadoActual = true;
    }
    void apagar()
    {
        estadoActual = false;
    }
    bool LeerEstado()
    {
        return estadoActual;
    }
};