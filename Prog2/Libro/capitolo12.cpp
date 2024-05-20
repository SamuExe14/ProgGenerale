#include <iostream>
#include <cmath>
using namespace std;

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

int main()
{
   C costruttore_C;

   Punto3D p(10, 20, 30);
   cout << p.modulo();
   return 0;
}