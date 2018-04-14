#ifndef TPLIK_H
#define TPLIK_H
#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdio>

using namespace std;

class Tplik
{
public:
    Tplik();
    virtual ~Tplik();
    fstream plik;
    bool tworzenie_pliku();
    bool czyszczenie_pliku();
    bool tresc_pliku();
    bool odczytanie_pliku();

protected:

private:
};

#endif // TPLIK_H
