#include <iostream>
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
     A() { cout << "Costruttore A" << endl; }
};

class B: public A
{
public:
     B() { cout << "Costruttore B" << endl; }
};

int main()
{
     Libro libro;
     B b;
}