#include <iostream>
using namespace std;

class Demo
{
private:
   int dati;

public:
   Demo();
   ~Demo() // definisco il distruttore della classe Demo
   {
      cout << "È stato invocato il distruttore" << endl;
   }
};

class Dossier
{
};

class Indirizzo
{
};

class Studente
{
public:
   Studente()
   {
      dare_id(0);
      dare_voto_medio(0.0);
   }

   void dare_id(int);
   void dare_voto_medio(float);

private:
   long id;
   Dossier dos;
   Indirizzo ind;
   float voto_medio;
};

class Prodotto
{
public:
   int prodotto(int m, int n);
   int prodotto(int p, float c);
   int prodotto(float p, int c);
   int prodotto(float m, float b);
};

int main()
{
}