#include <iostream>
#include <string>
using namespace std;

int sumaI(int iN1, int iN2)
{
    return iN1 + iN2;
}

double sumaD(double dN1, double dN2)
{
    return dN1 + dN2;
}

string sumaS(string s1, string s2)
{
    return s1 + s2;
}

template <class T>
T suma(T TN1, T TN2)
{
    T Tresultado = TN1 + TN2;
    return Tresultado;
}

int main()
{
    int iR;
    iR = sumaI(20, 40);
    cout << iR << endl;

    double dR;
    dR = sumaD(20.5, 20.5);
    cout << dR << endl;

    string sR;
    sR = sumaS("Hola ", "mundo");
    cout << sR << endl;

    cout << suma(20, 40) << endl;
    cout << suma(20.5, 20.5) << endl;

    string sHola = "Hola ";
    string sMundo = "mundo";
    cout << suma(sHola, sMundo);

    return 0;
}
