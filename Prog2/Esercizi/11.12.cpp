#include <iostream>
using namespace std;

class Impiegato
{
private:
     char nome[20];
     unsigned int numero_id;

public:
     Impiegato(){};
     void leggere_dati() { cin >> nome; };
     void vedere_dati() { cout << nome << endl; };
     ~Impiegato(){};
};

// void Impiegato::leggere_dati()
// {
// cin >> nome;
// }

int main()
{
     static Impiegato impiegato[10];
     int counter = 0;
     while (counter != 10)
     {
          impiegato[counter].leggere_dati();
          counter++;
     }

     counter = 0;
     while (counter != 10)
     {
          impiegato[counter].vedere_dati();
          counter++;
     }
}