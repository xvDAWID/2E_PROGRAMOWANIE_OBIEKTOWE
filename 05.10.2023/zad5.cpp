#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "podaj swoj wiek " << endl;
    cin >> x;
    if(x<11)
    cout << " jestes dzieckiem" << endl;
    else if(x>=11 && x <=17)
    cout << "jestes nastolatkiem" << endl;
    else 
    cout << "jestes dorosly" << endl;
    return 0;
}