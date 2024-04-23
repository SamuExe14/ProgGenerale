#include <iostream>
#include <cstring>
using namespace std;

const int name_size = 20;
//! CLASSI E OGGETTI
// class Persona
// {
// public:
//    Persona() : maggiore_età(18), alias_età(età)
//    {
//       età = 20;
//    }

//    void func();
//    void func2();

// private:
//    char nome[name_size];
//    char cognome[name_size];
//    int età;
//    const int maggiore_età;
//    int &alias_età;
// };

class Razionale
{
public:
   Razionale() // costruttore di default
   {
      int num = 0;
      int den = 1;
   }
   Razionale(int n, int d)
   { // costruttore con parametri
      int num = n;
      int den = d;
   }

   //! DISTRUTTORE
   ~Razionale()
   {

   } // definizione di un distruttore
};

class Persona
{
public:
   Persona(const char *nome, const char *cognome, int età_t) : maggiore_età(18), età(età_t)
   {
      // setNome();
      // setCognome();
   }

private:
   char nome[name_size];
   char cognome[name_size];
   int età;
   const int maggiore_età;
};

double converti();

int main()
{
}