#ifndef RAPPRESENTANTE_H
#define RAPPRESENTANTE_H
#include "impiegato.h"

class Rappresentante : public Impiegato
{
private:
    double baseMensile;
    double commissione;
    int tot;
public:
    Rappresentante(string, double = 0, double = 0, int = 0);
    void setBase (double);
    void setCommissione (double);
    void setVenduti (int);
    virtual double stipendio() const;
    virtual void print() const;
};

#endif // RAPPRESENTANTE_H
