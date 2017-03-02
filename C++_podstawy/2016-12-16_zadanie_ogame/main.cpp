#include <iostream>
#include <cmath>

using namespace std;

int met, kry, deu, koszt_met=20000, koszt_kry=7000, koszt_deu=2000;

int dost_met, dost_kry, dost_deu, wynik;

int main()
{
    // pobieranie danych
    cout << "Podaj ilo˜† metalu: ";
    cin >> met;
    cout << "Podaj ilo˜† krysztalu: " ;
    cin >> kry;
    cout << "Podaj ilo˜† deuteru: ";
    cin >> deu;

    cout << endl<< "Do zakupu jednego kr¥¾ownika potrzeba:" << endl;
    cout << "Metal: 20000" << endl;
    cout << "Krysztaˆ: 7000" << endl;
    cout << "Deuter: 2000" << endl;

    cout << endl << "Ty posiadasz: "<< endl;
    cout << "Metal :" << met << endl;
    cout << "Krysztaˆ :" << kry << endl;
    cout << "Deuter :" << deu << endl;
    cout << endl;

    // obliczanie dostepnych krazownikow dla kazdego surowca
    dost_met=trunc(met/koszt_met);
    dost_kry=trunc(kry/koszt_kry);
    dost_deu=trunc(deu/koszt_deu);

    //cout << endl << endl << dost_met << endl << dost_kry << endl << dost_deu << endl << endl;
    // znajdowanie najmniejszej ilosci krazownikow dostepnych z danego surowca

    wynik=dost_met;
    if (wynik>dost_kry) wynik=dost_kry;
    else if (wynik>dost_deu) wynik=dost_deu;

    //cout << endl << wynik << endl << endl;

    // wyswietlanie wynikow
    if (met<0 || kry<0 || deu<0) cout << "Warto˜† surowc¢w nie mo¾e by† ujemna :(";
    else if (wynik==0) cout << "Nie masz wystarczaj¥cej ilo˜ci surowc¢w :(";
    else if (wynik==1) cout << "Mozesz kupi† " << wynik << " kr¥¾ownik. ";
    else if (wynik>1 && wynik<5) cout << "Mozesz kupi† " << wynik << " kr¥¾owniki. ";
    else cout << "Mozesz kupi† " << wynik << " kr¥¾ownik¢w. ";

    //cout << endl << wynik << endl << endl;

    return 0;
}
