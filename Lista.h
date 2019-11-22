#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
class Lista
{
    private:
        T TLista[20];
        int iNumElem;
    public:
        Lista();
        void ordenaLista();
        bool agregaElem(T);
        T buscaIndice(int);
        bool buscaElem(T);
        T eliminaUltimo();
        void toString();
};

template <class T>
Lista<T>::Lista()
{
    iNumElem = 0;
}

template <class T>
void Lista<T>::ordenaLista()
{
    sort(TLista, TLista + iNumElem);
}

template <class T>
bool Lista<T>::agregaElem(T t)
{
    if (iNumElem < 20)
    {
        TLista[iNumElem] = t;
        iNumElem++;
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
T Lista<T>::buscaIndice(int iIndice)
{
    return TLista[iIndice];
}

template <class T>
bool Lista<T>::buscaElem(T t)
{
    int iX;
    for (iX = 0; iX < iNumElem; iX++)
    {
        if (t == TLista[iX])
        {
            return true;
        }
    }
    return false;
}

template <class T>
T Lista<T>::eliminaUltimo()
{
    T eliminado = TLista[iNumElem - 1];
    TLista[iNumElem - 1] = '\0';
    iNumElem--;
    return eliminado;
}

template <class T>
void Lista<T>::toString()
{
    int iX;
    for (iX = 0; iX < iNumElem; iX++)
    {
        cout << TLista[iX] << endl;
    }
}

#endif
