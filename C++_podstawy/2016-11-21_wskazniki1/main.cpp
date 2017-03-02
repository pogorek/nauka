#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int ile;

    cout << "Ile liczb ma byc w tablicy: ";
    cin >> ile;

    int *tablica;
    tablica = new int [ile];

    for (int i=0; i<ile; i++)
    {
        cout << "Indeks " << i <<": " << (int)tablica;
        cout << endl;
        tablica++;
    }


    delete [] tablica;


    getchar();
    return 0;
}
