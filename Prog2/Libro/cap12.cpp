#include <iostream>
#include <cmath>
using namespace std;

//! CLASSI DERIVATE

class Pubblicazione
{
public:
     void inserire_editore();
     void inserire_data();

private:
     string editore;
     unsigned long data;
};

class Rivista : public Pubblicazione
{
public:
     void inserire_tiratura();
     void inserire_venduto();

private:
     unsigned tiratura;
     unsigned long venduto;
};

class Libro : public Pubblicazione
{
public:
     void inserire_isbn();
     void inserire_autore();

private:
     string isbn;
     string autore;
};

//! OPERATORE DI RISOLUZIONE DI VISIBILITÀ

class Base
{
public:
     int i1;

protected:
     int i2;

private:
     int i3;
};

class D1 : public Base
{
public:
     using Base::i2;
};

//! COSTRUTTORI IN EREDITARIETÀ

class A
{
public:
     A() { cout << "Allocato costruttore A " << endl; }
};

class B : public A
{
public:
     B() { cout << "Allocato costruttore B" << endl; }
};

class C : public B
{
public:
     C() { cout << "Allocato costruttore C" << endl; }
     ~C() { cout << "Distrutto C" << endl; }
};

//! ESEMPIO 12.6

class Punto2D
{
public:
     Punto2D(int x, int y)
     {
          ascissa = x;
          ordinata = y;
     };
     int ascissa;
     int ordinata;
};

class Punto3D : public Punto2D
{
public:
     Punto3D(int, int, int);
     float modulo();

private:
     int quota;
};

Punto3D::Punto3D(int x, int y, int z) : Punto2D(x, y)
{
     quota = z;
}

float Punto3D::modulo()
{
     int r = ascissa * ascissa + ordinata * ordinata + quota * quota;
     return sqrt(r);
}

//!  CARATTERISTICHE DELL'EREDITARIETÀ MULTIPLA

class Rubinetto
{
public:
     void aprire(); // --------------|
}; //|
   //|
class Finestra      //|-//! avendo entrambe le classi il metodo aprire(), si può generare ambiguità
{                   //|
public:             //|
     void aprire(); // --------------|
};

class FinRub : public Finestra, public Rubinetto
{
public: // è meglio risolvere le ambiguità dandogli dei nomi comprensibili
     void f_aprire() { Finestra::aprire(); }
     void r_aprire() { Rubinetto::aprire(); }
};

//! AMBIGUITÀ TRA ATTRIBUTI CON CLASSI DERIVATE
class Lavoratore
{
public:
     const int num_ss;
     char *nome;
};

class Studente
{
public:
     char *nome;
};

class Stu_Lavoratore : public Lavoratore, public Studente
{
public:
     void stampare()
     {
          cout << "Numero ss: " << num_ss << endl;
          // cout << "Nome: " << nome; --> ERRORE DI AMBIGUITÀ
          cout << "Nome" << Studente::nome << endl;
     }
};

//! Precedenza

class Padre
{
public:
     void f(int);
     void f(char);
     void f(const string &);
};

class Figlio: public Padre
{
public:
     void f(const string &);
};

int main()
{
     Libro libro;
     B b;

     C costruttore_C;

     Punto3D p(10, 20, 30);
     cout << p.modulo();

     FinRub f;

     //! f.aprire(); produrrebbe un errore
     f.Rubinetto::aprire(); //? Si può risolvere l'ambiguità con l'operatore di risoluzione di visibilità
     f.Finestra::aprire();

     Figlio ogg;
     // ogg.f(5); ERRORE: Padre::f(int) è occultata
     // ogg.f('x'); ERRORE: Padre::f(char) è occultata
     ogg.f("hello"); // corretto

     return 0;
}