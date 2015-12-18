#include <iostream>
#include "dirigente.h"
#include "rappresentante.h"
#include "lavoratoreore.h"

using namespace std;

void stampaStipendio (Impiegato * p)
{
    p -> print ();
    cout << "in questo mese ha guadagnato " << p -> stipendio() << " Euro. \n";
}

int main()
{
    Dirigente d("Paperino", 4000);
    Rappresentante r("Topolino", 1000, 3, 250);
    LavoratoreOre l ("pluto", 15, 170);
    stampaStipendio (&d);
    stampaStipendio(&r);
    stampaStipendio(&l);
}

