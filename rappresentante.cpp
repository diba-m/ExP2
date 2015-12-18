#include "rappresentante.h"

Rappresentante::Rappresentante(string n, double b, double c, int t) : Impiegato(n), baseMensile(b), commissione(c), tot(t)
{
}

void Rappresentante :: setBase(double b)
{
    baseMensile = b;
}

void Rappresentante :: setCommissione (double c)
{
    commissione = c;
}

void Rappresentante :: setVenduti (int t)
{
    tot = t;
}

double Rappresentante :: stipendio() const
{
    return baseMensile + commissione * tot;
}

void Rappresentante :: print() const
{
    cout << "Il Rappresentante si chiama: ";
    Impiegato :: print();
}
