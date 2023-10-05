#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "podaj liczbe " << endl;
    cin >> x;
    if(x>=100 && x <150)
    cout << "Podana liczba miesci sie w przedziale od 100-150" << endl;
    else
    cout << "podana liczba nie miesci sie w przedziale od 100-150" << endl;
    
    return 0;
}
