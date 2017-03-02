#include <iostream>
#include <cstdlib>

using namespace std;

int nr_miesiaca, rok;

int main()
{
    cout << "Podaj numer miesiaca: ";
    if (!(cin >> nr_miesiaca))
    {
        cout << "To nie jest numer miesiaca!";
        exit(0);
    }
    switch(nr_miesiaca)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << " Miesiac ma 31 dni.";
    break;

    case 4:
    case 6:
    case 9:
    case 11:
        cout << " Miesiac ma 30 dni.";
    break;

    case 2:
        {
            cout << "Podaj rok: ";
            cin >> rok;

            if (((rok%4==0) && (rok%100!=0)) || (rok%400==0))
            cout << "W roku " << rok << " luty ma 29 dni.";
            else cout << "W roku " << rok << " luty ma 28 dni.";

        }
    break;
    default: cout << "Nie ma takiego miesiaca.";
    }

    return 0;
}
