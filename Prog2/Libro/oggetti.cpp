#include <iostream>
using namespace std;

class Rettangolo
{
private:
     int sinistro;
     int destro;
     int superiore;
     int inferiore;

public:
     Rettangolo(int sin, int des, int sup, int inf); // costruttore della classe
};

class Punto
{
public:
     Punto() // costruttore di default che inizializza x e y = 0
     {
          x = 0;
          y = 0;
     }

     Punto(int x, int y);
     Punto(double x, double y);

private:
     int x;
     int y;
};

class miaClasse
{
private:
     int T;
     const int CInt;
     int &Dint;

public:
     miaClasse(int Param) : T(Param), CInt(25), Dint(T)
     {
     }
};

class Contatore
{
private:
     unsigned int cont;

public:
     Contatore() { cont = 0; }
     void inc_cont() { cont++; }
     int legge_cont() { return cont;}
};



int main()
{
     // Rettangolo rettangolo(25, 25, 30, 30); // creazione dell'oggetto con i parametri precedentemente definiti
     // Rettangolo rettangolo1(40, 40, 70, 70);

     // Punto();                 // chiamata al costruttore di default
     // Punto x = Punto(50, 25); // costruisce un oggetto e lo assegna a x
     // Punto P(50.5, 25.6);

     Contatore c1, c2;

     cout << "c1 = " << c1.legge_cont() << endl; // c1 = 0 
     cout << "c2 = " << c2.legge_cont() << endl; // c2 = 0

     c1.inc_cont(); // 1
     c2.inc_cont(); // 1
     c2.inc_cont(); // 2

     cout << "c1 = " << c1.legge_cont() << endl; // c1 = 1 
     cout << "c2 = " << c2.legge_cont() << endl; // c2 = 2
}