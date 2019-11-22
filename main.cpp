#include <iostream>
#include <string>
#include "Lista.h"
using namespace std;

string pedirTipo()
{
    string sTipo;
    cout << "Ingrese el tipo de lista (int, double, string): ";
    cin >> sTipo;
    return sTipo;
}

int main()
{
    Lista<int> listaInt;
    Lista<double> listaDouble;
    Lista<string> listaString;
    char cOpcion;
    string sTipo, sElem;
    int iElem, iIndice;
    double dElem;
    bool bExiste;

    do
    {
        cout << " *** MENU ***" << endl;
        cout << "a) Agrega Elemento" << endl;
        cout << "b) Busca Indice" << endl;
        cout << "c) Busca Elemento" << endl;
        cout << "d) Muestra lista" << endl;
        cout << "e) Elimina Ultimo" << endl;
        cout << "f) Ordena Lista e imprimela" << endl;
        cout << "g) Terminar" << endl;
        cout << "Opcion: ";
        cin >> cOpcion;

        if (cOpcion != 'g' && cOpcion != 'G')
        {
            sTipo = pedirTipo();
        }

        switch (cOpcion)
        {
            case 'a':
            case 'A':
                if (sTipo == "int")
                {
                    cout << "Ingrese el entero: ";
                    cin >> iElem;
                    listaInt.agregaElem(iElem);
                }
                else if (sTipo == "double")
                {
                    cout << "Ingrese el double: ";
                    cin >> dElem;
                    listaDouble.agregaElem(dElem);
                }
                else if (sTipo == "string")
                {
                    cout << "Ingrese el string: ";
                    cin >> sElem;
                    listaString.agregaElem(sElem);
                }
                break;

            case 'b':
            case 'B':
                cout << "Ingrese el indice: ";
                cin >> iIndice;
                if (sTipo == "int")
                {
                    cout << "listaInt[" << iIndice << "]: " << listaInt.buscaIndice(iIndice) << endl;
                }
                else if (sTipo == "double")
                {
                    cout << "listaDouble[" << iIndice << "]: " << listaDouble.buscaIndice(iIndice) << endl;
                }
                else if (sTipo == "string")
                {
                    cout << "listaString[" << iIndice << "]: " << listaString.buscaIndice(iIndice) << endl;
                }
                break;

            case 'c':
            case 'C':
                cout << "Ingrese el " << sTipo <<": ";
                if (sTipo == "int")
                {
                    cin >> iElem;
                    bExiste = listaInt.buscaElem(iElem);
                }
                else if (sTipo == "double")
                {
                    cin >> dElem;
                    bExiste = listaDouble.buscaElem(dElem);
                }
                else if (sTipo == "string")
                {
                    cin >> sElem;
                    bExiste = listaString.buscaElem(sElem);
                }
                cout << (bExiste ? "Sí " : "No ") << "se encontro el elemento." << endl;
                break;

            case 'd':
            case 'D':
                if (sTipo == "int")
                {
                    cout << "listaInt:" << endl;
                    listaInt.toString();
                }
                else if (sTipo == "double")
                {
                    cout << "listaDouble:" << endl;
                    listaDouble.toString();
                }
                else if (sTipo == "string")
                {
                    cout << "listaString:" << endl;
                    listaString.toString();
                }
                break;

            case 'e':
            case 'E':
                cout << "Eliminando: ";
                if (sTipo == "int")
                {
                    cout << listaInt.eliminaUltimo() << endl;
                }
                else if (sTipo == "double")
                {
                    cout << listaDouble.eliminaUltimo() << endl;
                }
                else if (sTipo == "string")
                {
                    cout << listaString.eliminaUltimo() << endl;
                }
                break;

            case 'f':
            case 'F':
                if (sTipo == "int")
                {
                    listaInt.ordenaLista();
                    listaInt.toString();
                }
                else if (sTipo == "double")
                {
                    listaDouble.ordenaLista();
                    listaDouble.toString();
                }
                else if (sTipo == "string")
                {
                    listaString.ordenaLista();
                    listaString.toString();
                }
                break;

            case 'g':
            case 'G':
                break;
        }
    }
    while (cOpcion != 'g' && cOpcion != 'G');

    return 0;
}
