#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

string tytul, nick;
string pytanie[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string odpowiedz[5];
string poprawna[5];
int punkty=0;


int main()
{
    fstream plik;
    string linia;

    int nr_linii=1, nr_pyt=0;

    plik.open("quiz.txt", ios::in);

    if (plik.good()==false) {cout << "Nie potrafie znalesc pliku z gra."; exit(0);}

    while (getline(plik, linia))
    {
        switch(nr_linii)
        {
            case 1: tytul = linia; break;
            case 2: nick = linia; break;
            case 3: pytanie[nr_pyt] = linia; break;
            case 4: odpA[nr_pyt] = linia; break;
            case 5: odpB[nr_pyt] = linia; break;
            case 6: odpC[nr_pyt] = linia; break;
            case 7: odpD[nr_pyt] = linia; break;
            case 8: poprawna[nr_pyt] = linia; break;
        }

        if (nr_linii==8) {nr_linii=2; nr_pyt++;}
        nr_linii++;
    }

    plik.close();

        cout << "Temat quizu: " << tytul;
        cout << endl << "Autor: " << nick << endl;


    for (int i=0; i<=4; i++)
    {
        cout << endl << pytanie[i] << endl;
        cout << "Odp. A: " << odpA[i] << endl;
        cout << "Odp. B: " << odpB[i] << endl;
        cout << "Odp. C: " << odpC[i] << endl;
        cout << "Odp. D: " << odpD[i] << endl;

        cout << endl << "Twoja odpowiedz: ";
        cin >> odpowiedz[i]; // blad chyba

        transform(odpowiedz[i].begin(), odpowiedz[i].end(), odpowiedz[i].begin(), ::tolower);

            if (odpowiedz[i]==poprawna[i])
                {
                    cout << "Gratulacje! Zgadza sie.";
                    punkty++;
                }
                else cout << "Niestety nie. Poprawna odpowiedz to: " << poprawna[i];
                cout << endl;
    }

    cout << endl << endl << "Koniec quizu. Liczba zdobytych przez Ciebie punktow to: " << punkty << "/5.";

    if (punkty<3)
    {
        cout << endl << endl << "Moglo byc lepiej.";
    }
    else cout << endl << endl << "Dobra robota!";


    return 0;
}
