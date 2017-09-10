#include <iostream>
#include <cmath>
using namespace std;
/*
Darbas atliktas Mariaus Vilkeviciaus
Uzduotis :
3.	Parašykite programą, kuri, įvedus trijų kraštinių ilgius, nustatytų,
ar iš jų galima sudaryti trikampį. Jei toks trikampis egzistuoja,
reikėtų apskaičiuoti trikampio plotą ir nustatyti, ar jis yra lygiašonis,
ar lygiakraštis ar įvairiakraštis.
*/
double trikplotas(double a, double b, double c);

int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    if(a==b&&b==c){
        cout<<"Lygiasonis trikampis, ir jo plotas : ";
        cout<<trikplotas(a,b,c)<<endl;
    }
    else if((a==c&&a+c>b)||(a==b&&a+b>c)||(c==b&&c+b>a)){
        cout<<"Lygiakrastis trikampis, ir jo plotas : ";
        cout<<trikplotas(a,b,c)<<endl;
    }
    else if(a!=c && c!=b && b!=a){
        cout<<"Ivairiakrastis trikampis, ir jo plotas : ";
        cout<<trikplotas(a,b,c)<<endl;
    }
    return 0;
}
double trikplotas(double a, double b, double c){
 double ats, p;
    p=((a+b+c)/2);
    ats=sqrt(p*(p-a)*(p-b)*(p-c));
    return ats;
}
