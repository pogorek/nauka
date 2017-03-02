#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>


using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Witaj Wedrowcze! Stworzylem liczbe z zakresu 1 - 100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;
    cout<<liczba<<endl;

    while(strzal!=liczba)
    {
        ile_prob++;
        cout<<"Twoja "<<ile_prob<<" proba. Zgadnij jaka to liczba:"<<endl;
        cin>>strzal;

        if(strzal==liczba)
            cout<<"Bravissimo Wedrowcze! Los Ci sprzyjal w "<<ile_prob<<" probie."<<endl;

        else if(strzal<liczba)
            cout<<"To za malo."<<endl;

        else if(strzal>liczba)
            cout<<"To zbyt wiele."<<endl;

    }

    getchar();

    return 0;
}
