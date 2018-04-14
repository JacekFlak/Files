#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdio>
#include "Tplik.h"

using namespace std;

int main()
{
    Tplik file;
    file.tworzenie_pliku();
    cout<<endl;
   file.czyszczenie_pliku();
    cout<<endl;
    file.tresc_pliku();
    cout<<endl;
    file.odczytanie_pliku();
    cout<<endl;
    return 0;
}
