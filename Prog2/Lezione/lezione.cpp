#include <cstdlib>
#include <iostream>
using namespace std;

// #ifndef figura_hpp
#define figura_hpp

class Figura
{
public:
   virtual double calcoloArea() = 0;
   virtual double calcoloPerimetro() = 0;
   virtual void stampa() = 0;
};

class Cerchio : public Figura
{
public:
   Cerchio(double valraggio) : raggio(valraggio), pigreco(3.1415) {}

   virtual double calcoloArea() { return pigreco * raggio * raggio; }
   virtual double calcoloPerimetro() { return 2 * pigreco * raggio; }
   virtual void stampa() { cout << "Cerchio di raggio: " << raggio << endl; }

private:
   double raggio;
   const double pigreco;
};

class Quadrato : public Figura
{
public:
};

int main()
{
   // Figura* figura[] = {new Cerchio(5.0), new Quadrato()}
}