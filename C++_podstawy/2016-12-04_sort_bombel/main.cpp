#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void sort_bombelkowe(int *tab, int ile)
{
    for (int i=1; i<ile; i++)
    {
        for (int j=ile-1; j>=1; j--)
        {
            if (tab[j]<tab[j-1])
            {
                int buff=tab[j];
                tab[j]=tab[j-1];
                tab[j-1]=buff;
            }
        }
    }
}

int ile;

int main()
{
    cout << "Podaj ilosc losowychliczb w tablicy: " << endl;
    cin >> ile;

    //dynamiczne alokowanie tablicy
    int *tablica;
    tablica = new int [ile];

    int *tablica2;
    tablica2 = new int [ile];

    //inicjowanie generatora
    srand(time(NULL));

    cout << "Przed sortowaniem: ";

    for (int i=0; i<ile; i++)
    {
        tablica[i]=rand()%100000+1;
        cout << tablica[i] << " " ;
    }

    for (int i=0; i<ile; i++)
    {
        tablica2[i]=tablica[i];
    }

    sort_bombelkowe(tablica, ile);

    cout << endl << "Po sortowaniu bombelkowym: ";

    for (int i=0; i<ile; i++)
    {
        cout << tablica[i] << " " ;
    }

    delete [] tablica;
    delete [] tablica2;


    return 0;
}
