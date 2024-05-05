#include <cstddef>
#include <iostream>
#include <string>
using namespace std;

class Squadra
{
private:
   string nome;
   int anno;

public:
   Squadra(string nome, int anno) : nome{nome}, anno{anno} {};
   virtual ~Squadra() {}
};

class SquadraClub : public Squadra
{
private:
   string sede;
   string nazionalità;

public:
   SquadraClub(string nome, int anno, string sede, string nazionalità) : Squadra{nome, anno}, sede{sede}, nazionalità{nazionalità} {}
   string getNazionalità() const { return nazionalità; }
};

class SquadraNazionale : public Squadra
{
private:
   string nazione;

public:
   SquadraNazionale(string nome, int anno, string nazione) : Squadra{nome, anno}, nazione{nazione} {}
};

class Torneo
{
private:
   Squadra **lista;
   size_t size;
   size_t capacità;

public:
   Torneo(size_t capacità) : capacità{capacità}, size{0}
   {
      lista = new Squadra *[capacità];
   }

   ~Torneo() { delete[] lista; }

   virtual bool addSquadra(Squadra *squadra)
   {
      if (size < capacità)
      {
         lista[size] = squadra;
         size++;
         return true;
      }
      return false;
   }

   size_t getSize() const { return size; }
   size_t getCapacità() const { return capacità; }

protected:
   Squadra **getLista() const { return lista; }

protected:
   Squadra **getLista() { return lista; }
};

class TorneoClub : public Torneo
{
   using Torneo::Torneo;

public:
   bool addSquadra(Squadra *squadra) override
   {
      SquadraClub *club = dynamic_cast<SquadraClub *>(squadra);
      if (club != nullptr)
      {
         return Torneo::addSquadra(squadra);
      }
      return false;
   }

   size_t contaClub(const string &nazionalità) const
   {
      size_t contatore = 0;
      Squadra **sq = getLista();
      for (size_t i = 0; i < this->getCapacità(); i++)
      {
         SquadraClub *club = dynamic_cast<SquadraClub *>(sq[i]);
         if (club != nullptr && club->getNazionalità() == nazionalità)
         {
            contatore++;
         }
         return contatore;
      }
   }
};

class TorneoNazionale : public Torneo
{
   bool addSquadra(Squadra *squadra) override
   {
      SquadraNazionale *nazion = dynamic_cast<SquadraNazionale *>(squadra);
      if (nazion != nullptr)
      {
         Squadra **lista = getLista();
         for (size_t i = 0; i < getCapacità(); i++)
         {
            SquadraNazionale *nz = dynamic_cast<SquadraNazionale *>(lista[i]);
            if (nz != nullptr)
            {
               // if (nz->getNazionalità() == nazion->getNazionalità())
               // {
               //    return false;
               // }
            }
         }
         return Torneo::addSquadra(squadra);
      }
      return false;
   }
};

int main()
{
   Squadra *juve = new Squadra("Juventus", 1897);
   Squadra *catania = new Squadra("Catania", 1946);
   SquadraNazionale *italia = new SquadraNazionale("Italia", 1899, "Italiana");
   Squadra *inter = new Squadra("Inter", 1908);
   TorneoClub *serieA = new TorneoClub(10);

   cout << "Add squadra " << serieA->addSquadra(juve) << endl;
   cout << "Add squadra " << serieA->addSquadra(catania) << endl;
   cout << "Add squadra " << serieA->addSquadra(inter) << endl;
   cout << "Add squadra " << endl; 
   cout << "Add squadra " << endl; 
   cout << "Add squadra " << endl;
}