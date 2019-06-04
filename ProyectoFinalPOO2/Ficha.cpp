#include "Casilla.cpp"
class Ficha{
private:
    char estado;
public:
    Ficha() {estado='C';}
    void mover(Casilla* casilla){}
    virtual ~Ficha() {}
};