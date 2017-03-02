#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

clock_t start, stop;
double czas;

int main()
{
    int ile;

    cout << "Podaj ilosc cykli : ";
    cin >> ile;

    int *tabl;
    tabl = new int [ile];

    start = clock();

    for (int i=0; i<ile; i++)
    {
        tabl[i]=i;
        tabl[i]+=50;
    }

    stop=clock();
    czas=(double)(stop-start) /CLOCKS_PER_SEC;
    cout << czas;

    delete [] tabl;

    int *wskaznik = tablica;

    tablica = new int [ile];

    for (int i=0; i<ile; i++)
    {
        *wskaznik=i;
        *wskaznik+=50;
        wskaznik++;
    }

    delete []tabl;

    return 0;
}
