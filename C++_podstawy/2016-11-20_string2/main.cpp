#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    //string to lancuch z okreslona iloscia komurek w formie tablicy, mozna wyswietlic okreslona komurke
    string napis="Ala ma kota";
    cout << napis[4];
    cout << endl << endl;


    // okreslamy dlugosc zmiennej "imie" poprzez funkcje "length()" nastepnie jesli ostatnia litera imienia "imie[dlugosc_imienia-1]" to a(pisane w apostrofach to okreslamy instrukcje
    string imie;
    cout << "Podaj imie:";
    cin >> imie;

    int dlugosc_imienia=imie.length();
    cout << "Dlugosc imienia: " << dlugosc_imienia << endl;
    if (imie[dlugosc_imienia-1]=='a')
        cout << "Jestes kobieta.";
    else
        cout << "Jestes facetem";
    cout << endl << endl;


    // odwracamy wyraz, okreslamy dlugosc wyrazu, tworzymy petle zaczynajaca sie na ostatniej literce wyrazu, a konczacej sie na pierwszej
    string wyraz;

    cout << "Podaj wyraz do odwrocenia: ";
    cin >> wyraz;

    int dlugosc_wyrazu=wyraz.length();
    for (int i=dlugosc_wyrazu-1; i>=0; i--)
        cout << wyraz[i];
    cout << endl << endl;


    // jesli nie bedzie to pierwsza wczytywana zmienna to nalezy uzyc funkcji "cin.ignore()" , jesli w funkcji "cin" pojawi sie spacja to zadne znako po spacji nie zostana zapisace, uzywamy wtedy funkcji "getline" z atrybutami getline(cin, napis2);

    cin.ignore();
    string napis2;
    cout << "Podaj napis: ";
    getline(cin, napis2);
    cout << napis2;
    cout << endl << endl;


    // konkatenacja - laczenie ze soba wyrazen laczymy stringi "+"

    string jeden="Ala ma ";
    string dwa="kota.";

    string trzy=jeden+dwa;
    cout << trzy;
    cout << endl << endl;


    // zmiana zmiennej na tylko duze litery oraz tylko male litery


    string napis3="Oko prawe.";

    transform(napis3.begin(), napis3.end(), napis3.begin(), ::toupper);
    cout << napis3;
    transform(napis3.begin(), napis3.end(), napis3.begin(), ::tolower);
    cout << endl << endl << napis3;
    cout << endl << endl;


    // szukanie stringa "szukaj" w stringu "napis4" ,

    string napis4="Ala ma kota.";
    string szukaj="kot";
    size_t pozycja=napis4.find(szukaj);

    if (pozycja!=string::npos)
        cout << "Znajduje sie na pozycji: " << pozycja;
    else
        cout << "Nie znaleziono.";
    cout << endl << endl;


    // wykasowywanie fragmentu stringa

    string napis5="AlaOma9kota.";
    cout << napis5;
    napis5.erase(4,3);
    cout << napis5;
    cout << endl << endl;


    // dokladanie

    string napis6="Ala ma kota";
    cout << napis6 << endl;
    napis6.insert(11, " Bonifacego.");
    cout << napis6;
    cout << endl << endl;

    // zastepywanie

    string napis7="Ala ma kota";
    cout << napis7 << endl;
    napis7.replace(4,3, "nie ma niestety ");
    cout << napis7;
    cout << endl << endl;


    // wyciaganie
    string napis8="Ala ma kota";
    cout << napis8 << endl;
    string wyciagniety=napis8.substr(4,6);
    cout << wyciagniety << endl;
    cout << napis8;

    cout << endl << endl;


    return 0;
}
