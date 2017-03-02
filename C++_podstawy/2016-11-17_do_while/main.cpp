#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int populacja=1; int godzin=0;

int main()
{
    do
    {
        godzin++;
        populacja = populacja *2;

        Sleep(100);
        system("cls");
        cout<<"Populacja bakterii: "<<populacja<<endl;
        cout<<"Liczba godzin: "<<godzin<<endl;
    }
    while(populacja<=1000000000);
    return 0;
}
