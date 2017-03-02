#include <iostream>

using namespace std;

int populacja, godzin;

int main ()
{

while (populacja<=1000000000)
    {
        godzin++;
        populacja = populacja *2;


        cout<<"Populacja bakterii: "<<populacja<<endl;
        cout<<"Liczba godzin: "<<godzin<<endl;
    }
  return 0;
}
