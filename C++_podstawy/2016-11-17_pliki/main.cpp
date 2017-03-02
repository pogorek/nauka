#include <iostream>
#include <fstream>

using namespace std;

string imie, nazwisko;
int tele;

int main()
{
    cout << "Podaj imie: ";            cin >> imie;
    cout << "Podaj nazwisko: ";        cin >> nazwisko;
    cout << "Podaj numer telefonu: ";  cin >> tele;

    fstream plik;
    plik.open ("wizytowka.txt", ios::out | ios::app);

    plik << imie << endl;
    plik << nazwisko << endl;
    plik << tele << endl;
    plik << endl;

    plik.close();

    return 0;
}
