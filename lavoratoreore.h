#ifndef LAVORATOREORE_H
#define LAVORATOREORE_H
#include "impiegato.h"

class LavoratoreOre : public Impiegato
{
private:
    double pagaOraria;
    double oreLavorate;
public:
    LavoratoreOre(string, double = 0, double = 0);
    void setPaga (double);
    void setOre (double);
    virtual double stipendio() const;
    virtual void print() const;
};

#endif // LAVORATOREORE_H
