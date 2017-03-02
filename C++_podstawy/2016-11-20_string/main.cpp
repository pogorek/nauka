#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{

    string a_tekst= "Jakis tekst";

    for (int i = 0; i < a_tekst.length(); i++)
    {
        cout << a_tekst[i];
        Sleep(125);
}
    return 0;
}
