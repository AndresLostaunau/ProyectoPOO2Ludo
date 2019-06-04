class Casilla{
private:
    int x;
    int y;
    bool disponible;
    int color;
public:
    Casilla(int x, int y) : x(x), y(y) {}
    virtual void mostrar(){}
};