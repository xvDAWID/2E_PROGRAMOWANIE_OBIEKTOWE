#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "podaj liczbe do podzielenia" << endl;
    cin >> a;
    cout << "podaj dzielnik" << endl;
    cin >> b;

    if (a%b==0) 
        cout << "podana liczba jest podzielna przez liczbe: " << b << endl;
    else
        cout << "podana liczba nie jest podzielna przez ta liczbe bez reszty z dzielenia: " << endl;

    return(0);
}