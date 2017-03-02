#include <iostream>
#include <time.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

clock_t start, stop;

double czas;

long double pot(int p, int w)
{
    if (w==0) return 1;
    else return p*pot(p,w-1);
}


int main()
{

    setprecision(1000);

    long int a, b;
    long double wyn=1;

    cout << "Podaj podstawe i wykl potegi: ";
    cin >> b >> a;
    cout << endl;

    start=clock();

    for (int i=1; i<=a; i++ )
    {
        wyn=b*wyn;
    }
    stop=clock();

    czas=(double)(stop-start)/CLOCKS_PER_SEC;


    cout << "Z fora: " << wyn << " czas: " << czas;

    start=clock();

    pot(b,a);

    stop=clock();

    czas=(double)(stop-start)/CLOCKS_PER_SEC;

    cout << endl<< "Z rekurencji: " << pot(b,a) << " czas: " << czas;



    return 0;
}
