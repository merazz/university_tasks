#include <iostream>
/*
Darbas atliktas Mariaus Vilkeviciaus
Uzduotis :
1.	Parašykite programą, kuri pasakytų, ar studentas išlaikė egzaminą,
kai įvedamas gautas pažymys. (Egzaminas yra išlaikytas, jei gautas
įvertinimas yra didesnis kaip 5).
*/
using namespace std;

int main()
{
    int egzaminas;
    cout<<"Iveskite egzamino pazymi : ";
    cin>>egzaminas;
    if(egzaminas<5)
        cout<<"Egzaminas neislaikytas"<<endl;
    else if(egzaminas>10)
        cout<<"Negali buti daugiau nei 10"<<endl;
    else
        cout<<"Egzaminas islaikytas"<<endl;
    return 0;
}
