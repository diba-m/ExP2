#ifndef IMPIEGATO_H
#define IMPIEGATO_H
#include <iostream>
using namespace std;

class Impiegato // classe base polimorfa e astratta
{
public:
    Impiegato(string);
    string getNome() const;
    virtual double stipendio() const = 0;
    virtual void print() const;
private:
    string nome;
};

#endif // IMPIEGATO_H
