#include <iostream>

using namespace std;
/*
Darbas atliktas Mariaus Vilkeviciaus
Uzduotis :
4.	Pardavėjas gauna atlygį už darbą pagal pardavimus. T.y.
pardavęs prekių už <=5000 eurų, nuo šios sumos pardavėjas gauna 10 proc.,
pardavęs prekių daugiau kaip už 5000, bet mažiau nei 10000 eurų, nuo šios
sumos jis gauna 20 proc. Jei įvykdo pardavimų už >10000 eur., gauna 25 proc.
nuo pardavimų sumos. Parašykite programą, kuri paskaičiuotų, kokį atlygį gaus
pardavėjas, kuomet žinoma jo įvykdytų pardavimų suma.

*/

int main()
{
    double prekes = 0, atlygis = 0;
    cout << "Iveskite parduotu prekiu kaina : ";
    cin>> prekes;
    if(prekes<=5000){
        cout<<"Atlygis : ";
        atlygis=prekes*0.1;
        cout<<atlygis<<" Euru"<<endl;
    }
    else if(prekes>=5000 && prekes<=10000){
        cout<<"Atlygis : ";
        atlygis=prekes*0.2;
        cout<<atlygis<<" Euru"<<endl;
    }
    else{
        cout<<"Atlygis : ";
        atlygis=prekes*0.25;
        cout<<atlygis<<" Euru"<<endl;
    }
    return 0;
}
