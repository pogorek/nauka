#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj w banku INGPiotr!";
    cout<<"Podaj PIN:";
    cin>>PIN;

    if(PIN=="1729")
    {
        cout<<"Poprawny PIN";
    }
    else
    {
        cout<<"Niepoprawny PIN";
    }


    return 0;
}
