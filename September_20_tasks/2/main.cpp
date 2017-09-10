#include <iostream>
/*
Darbas atliktas Mariaus Vilkeviciaus
Uzduotis :
2.	Parašykite programą, kuri įvedus tris skaičius,
nustatytų, kuris iš jų yra mažiausias.
*/
using namespace std;

int main()
{   //apsirasome kintamuosius, sukuriami array kurie gali sutalpinti 4 skaitmenis
    int skaicius[3];
    int mazas = skaicius[0]; //mazas yra = pirmajam array skaiciui
    cin>>skaicius[0]>>skaicius[1]>>skaicius[2]; // Ivedami skaiciai y array
  //  cout<<skaicius[0]<<" "<<skaicius[1]<<" "<<skaicius[2]<<endl;
    for(int i=0; i<=2; i++){
        if(skaicius[i]<mazas) //lyginamas dabartinis skaicius su pirmuoju skaiciumi
            mazas = skaicius[i]; //jeigu skaicius mazesnis jis  irasomas i mazas.
    }
    cout<<mazas<<endl;
    return 0;
}
