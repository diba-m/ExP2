#ifndef DIRIGENTE_H
#define DIRIGENTE_H
#include "impiegato.h"

class Dirigente : public Impiegato
{
private:
    double fissoMensile;
public:
    Dirigente(string, double = 0);
    void setFissoMensile (double);
    virtual double stipendio() const;
    virtual void print() const; //override
};

#endif // DIRIGENTE_H
