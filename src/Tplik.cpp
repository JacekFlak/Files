#include "Tplik.h"
#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdio>

using namespace std;

Tplik::Tplik()
{}

Tplik::~Tplik()
{}
///////////////////////////////////////////////////////////////////////////////////////////////////
bool Tplik::tworzenie_pliku()
{
    ofstream plik("dane.txt");
    plik.open("dane.txt");
    cout<<"Utworzono pomyslnie plik o nazwie 'dane.txt'!"<<endl;
    plik.close();
}
///////////////////////////////////////////////////////////////////////////////////////////////////
bool Tplik::czyszczenie_pliku()
{
    plik.open("dane.txt", ios::trunc );
    plik.clear();
    plik.close();
    cout<<"Zawartosc pliku 'dane.txt' zostala wyczyszczona!"<<endl;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
bool Tplik::tresc_pliku()
{
    long long int  rozmiar = 10000;
    char zawartosc[rozmiar];
    cout<<"Wpisz nowa zawartosc pliku o nazwie 'dane.txt':"<<endl;
    cin.get(zawartosc,rozmiar);

    plik.open("dane.txt");
    plik<<zawartosc;
    plik.close();
}
///////////////////////////////////////////////////////////////////////////////////////////////////
bool Tplik::odczytanie_pliku()
{
    char znak;
    plik.open("dane.txt");
    if(!plik)
    {
        cout<<"Wystapil blad w procesie otwierania pliku!"<<endl;
    }

    cout<<"Aktualna zawartosc pliku 'dane.txt':"<<endl;

    while(plik.get(znak))
    {
        if(znak!=' ')
        {
            cout<<znak;
        }
        else
        {
            cout<<" ";
        }
    }
    return 0;
    plik.close();
}
///////////////////////////////////////////////////////////////////////////////////////////////////
