#include <iostream>
using namespace std;

class Libro
{
private: // si ci mettono gli attributi
   string autore;
   string titolo;

public:
   //* si definisce per prima il costruttore
   Libro(string titolo, string autore) : titolo{titolo}, autore{autore} // posso farlo così
   {
      this->titolo = titolo; // o così
      this->autore = autore;
   }

   ~Libro() { cout << "Oggetto distrutto" << endl; }

   //* successivamente definisco i metodi della mia classe
   string getTitolo() const { return titolo; }

   string getAutore() const { return autore; }

   void setTitolo(string titolo)
   {
      this->titolo = titolo;
   }

   void setAutore(string autore)
   {
      this->autore = autore;
   }

   string getLabel()
   {
      return "Titolo: " + getTitolo() + "Autore: " + getAutore();
   }
};

class Manoscritto
{
private:
   string manoscritto;

public:
   bool operator==(const Manoscritto & y) const 
   {
      return true;
   }
   
};

class Romanzo : private Manoscritto
{
};

int main()
{ //* istanzio il mio oggetto libro1 con la classe Libro
   Libro libro1("La solitudine dei numeri primi", "Paolo Giordano");

   cout << libro1.getTitolo() << endl
        << libro1.getAutore() << endl;

   libro1.setTitolo("Stocazzone");
   libro1.setAutore("StoGranCazzone");

   cout << libro1.getTitolo() << libro1.getAutore() << endl;

   cout << libro1.getLabel() << endl;

   Romanzo *rom1 = new Romanzo("Programmazione in Python", "UNICT", 2022, "Università di Catania");
   Romanzo *rom2 = new Romanzo("Programmazione in Python", "UNICT", 2022, "Università di Catania");

   cout << *rom1 == *rom2 << endl;
}