#include <iostream>

using namespace std;

float na_cale(float m)
{
    float cale=m*39.37;
    return cale;
}

float na_jardy(float j);

void na_mile(float mi)
{

    cout <<"To mili: " << mi*0.000621;
}

int main()
{
    float metry;

    cout << "Podaj metry :";
    cin >> metry;


    cout << "To cali: " << na_cale(metry)<<endl;
    cout << "To jardow: " << na_jardy(metry)<< endl;
    na_mile(metry);

    return 0;
}

float na_jardy(float j)
{
    return j*1.0936;
}

