#include <iostream>
using namespace std;

//! PASSAGGIO PER RIFERIMENTO A UNA FUNZIONE

// metodo con i puntatori ereditata dal C
void scambia_con_puntatori(int *a, int *b)
{
     int ausiliare = *a;
     *a = *b;
     *b = ausiliare;
}

// metodo dei riferimenti di C++
void scambia_con_riferimenti(int &m, int &c)
{
     int ausiliare = m;
     m = c;
     c = ausiliare;
}

// argomenti di default
char funzdef(int arg = 1, char c = 'a', float f_val = 3.18); // -> in questo modo è possibile ...
                                                             //     ... anche omettere dei valori al passaggio degli argomenti

//! FUNZIONI INLINE
// vengono usate per ottimizzare la velocità del programma dato che fanno una copia del corpo della funzione
// e non il classico push nello stack
inline void saluta(string ciao)
{
     for (int i = 0; i < 5; ++i)
     {
          cout << ciao << endl;
     }
}

//? PRINCIPALI LIBRERIE STANDARD DEL C++
// cctype
// cmath
// cstdlib
// ctime

//! TEMPLATE DI FUNZIONI
//* template <class tipo> tipo_restituito func_name(lista parametri){
//* corpo della funzione
//* }

template <class tipo>
tipo my_abs(tipo x)
{
     return (x < 0) ? -x : x;
}
int main()
{
     int i = -3;
     int j = 10;
     float x = -4;

     scambia_con_puntatori(&i, &j);
     cout << "Il valore di i è " << i << endl;
     cout << "Il valore di j è " << j << endl;

     scambia_con_riferimenti(i, j);
     cout << "Il valore di i è " << i << endl;
     cout << "Il valore di j è " << j << endl;

     // funzdef();

     string ciao = "ciao";
     // cout << ciao << endl;
     saluta(ciao);

     // applicazione del template con parametro diverso
     cout << my_abs(x) << endl;
}
