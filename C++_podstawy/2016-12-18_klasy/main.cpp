#include <iostream>

using namespace std;

class Samochod
{
public:

    string marka;
    string model;
    int rocznik;
    int przebieg;

    void wczytaj()
    {
        cout << endl << "Podaj marke samochodu: ";
        getline(cin, marka);
        //cin.ignore();
        cout << "Podaj model samochodu: ";
        getline(cin, model);
        cout << "Podaj rocznik samochodu: ";
        cin >> rocznik;
        cout << "Podaj przebieg samochodu: ";
        cin >> przebieg;
    }

    void wyswietl()
    {
        cout << endl << "Pojazd:" << endl;
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "Rocznik: " << rocznik << endl;
        cout << "Przebieg: " << przebieg << endl;
    }
};

int main()
{
    cout << "ZABAWY AUTOMOBILOWE" << endl;
    Samochod s1;
    s1.wczytaj();
    s1.wyswietl();


    return 0;
}
