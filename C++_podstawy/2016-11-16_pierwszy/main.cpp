#include <iostream>

using namespace std;

int uczniowie,cukierki,x,y;

int main()
{
    cout << "Ilosc uczniow w klasie:";
    cin >> uczniowie;

    cout << "Ilosc cukierkow:";
    cin >> cukierki;

    x = cukierki/(uczniowie-1);
    cout<<"Ilosc cukierkow dla kazdego ucznia:"<<x;

    y = cukierki-x*(uczniowie-1);
    cout<<endl<<"Dla Jasia na wieczor:"<<y;

    return 0;
}
