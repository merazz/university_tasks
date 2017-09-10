#include <iostream>

using namespace std;
/*
Darbas atliktas Mariaus Vilkeviciaus
Uzduotis :
5.Parašykite programą, kuri, įvedus sunaudotos elektros energijos kiekį, pateiktų sąskaitą salos gyventojams pagal tokius įkainius:
Pirmi 50 kW kainuoja  0.5 eur/kW
Viršijus 50 kW, kitiems 100 kW kaina 0.75 eur/kW.
Dar sekančiam 100 kW taikomas tarifas 1.20 eur/kW
Viršijus 250 kW, 1.50 eur/kW
Taip pat taikomas 20 proc. administravimo mokestis.

*/
int main()
{
    double kilovatas, sum, proc, sumproc;
    cout << "Iveskite sunaudotu kilovatu skaiciu : " ;
    cin>>kilovatas;
    if(kilovatas<=50){
        sum=kilovatas*0.5;
        proc=sum*0.2;
        sumproc=proc+sum;
        cout<<"Moketi reikia : "<<sumproc<<endl;
    }
    else if(kilovatas>=50 && kilovatas <=150){
    kilovatas=kilovatas-50;
    sum=(50*0.5)+(kilovatas*0.75);
    proc=sum*0.2;
    sumproc=proc+sum;
    cout<<"Moketi reikia : "<<sumproc<<endl;
    }
    else if(kilovatas>=150 && kilovatas <=250){
    kilovatas=kilovatas-150;
    sum=(50*0.5)+(100*0.75)+(kilovatas*1.2);
    proc=sum*0.2;
    sumproc=proc+sum;
    cout<<"Moketi reikia : "<<sumproc<<endl;
    }
    else{
    kilovatas=kilovatas-250;
    sum=(50*0.5+100*0.75+100*1.2+kilovatas*1.5);
    proc=sum*0.2;
    sumproc=proc+sum;
    cout<<"Moketi reikia : "<<sumproc<<endl;
    }
    return 0;
}
