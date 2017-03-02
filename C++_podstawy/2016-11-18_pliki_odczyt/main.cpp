#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string imie, nazwisko;
int tele;

int main()
{

    fstream plik;
    plik.open ("wizytowka.txt", ios::in);

    if(plik.good()==false)
    {
        cout << "Pliku nie odnaleziono.";
        exit(0);
    }

    string linia;
    int nr_linii=1;

    while (getline(plik, linia))
    {
        switch(nr_linii)
        {
            case 1: imie = linia; break;
            case 2: nazwisko = linia; break;
            case 3: tele = atoi(linia.c_str()); break;
        }

        nr_linii++;
    }

    plik.close();

    cout << imie << endl;
    cout << nazwisko << endl;
    cout << tele << endl;

    return 0;
}
