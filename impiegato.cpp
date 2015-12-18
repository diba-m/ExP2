#include "impiegato.h"

Impiegato::Impiegato(string s) : nome(s)
{
}

string Impiegato::getNome() const
{
  return nome;
}

void Impiegato :: print() const
{
    cout<<nome;
}


