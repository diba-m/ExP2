#include "dirigente.h"

Dirigente::Dirigente(string n, double s) : Impiegato(n), fissoMensile(s)
{
}
void Dirigente :: setFissoMensile(double s)
{
    fissoMensile = s;
}

double Dirigente::stipendio() const
{
    return fissoMensile;
}

void Dirigente :: print () const
{
    cout << "Il dirigente si chiama: ";
    Impiegato :: print();
}
