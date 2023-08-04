#include <iostream>

using namespace std;

int main()
{
    string inputText;
    cout << "Podaj adres email: ";
    cin >> inputText;

    int dlugosc = inputText.size();

    bool symbol = false;
    int szukanyZnak = 0;

    for(int i=0; i<dlugosc; i++)
        {
            if(inputText[i]=='@')
                szukanyZnak++;
        }

    if(szukanyZnak==1)
        cout << "Znaleziono symbol @ w adresie" << endl;
    else if(szukanyZnak==0)
        cout << "Brak symbolu @ w adresie lub " << endl;
    else
        cout << "W adresie jest wiecej niz jeden znak @ w adresie" << endl;

    return 0;
}
