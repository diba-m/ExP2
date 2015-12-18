#include "lavoratoreore.h"

LavoratoreOre::LavoratoreOre(string n, double p, double o) : Impiegato (n), pagaOraria(p), oreLavorate(o)
{
}

void LavoratoreOre::setPaga(double p)
{
    pagaOraria = p;
}

void LavoratoreOre::setOre(double o)
{
   oreLavorate = o;
}

double LavoratoreOre::stipendio() const
{
    if (oreLavorate < 160)
        return pagaOraria*oreLavorate;
    else
        return 160*pagaOraria + (oreLavorate - 160) * 2 * pagaOraria;

}

void LavoratoreOre::print() const //overriding
{
    cout << "Il lavoratore a ore e";
    Impiegato :: print();
}
