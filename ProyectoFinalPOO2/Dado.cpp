#include <random>

class Dado{
public:
    Dado() = default;
    int lanzar(){ return rand()%6;}
    ~Dado() = default;
};
