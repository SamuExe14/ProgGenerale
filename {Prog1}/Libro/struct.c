#include <stdio.h>

//* Le strutture sono usate comunemente per definire record
//* di dati da memorizzare in un file

struct card
{ //? card è l'ETICHETTA della struttura
     char *face;
     char *suit; //? gli elementi della struttura sono chiamati MEMBRI

}; //? --> è previsto il ; per la terminazione della struct

struct employee
{
     char firstName[20];
     char lastName[20];
     unsigned int age;
     char gender;
     double hourlySalary;
};

//* E' possibile creare una struct autoreferenziale( una struct che ha come membro una struct differente)

struct employee2
{
     char firstName[20];
     char lastName[20];
     unsigned int age;
     char gender;
     double hourlySalary;
     // struct employee teamLeaderPtr; //! E' un errore
     struct employee *teamLeaderPtr;
};

//! ACCESSO AI MEMBRI DI UNA STRUTTURA

int main()
{
     //* Definisco la struct card con i relativi membri
     struct card
     {
          char *value;
          char *suit;
     };
     //* Definisco e inizializzo la variabile aCard di tipo struct card
     struct card aCard = {"Three", "Spades"};

     printf("%s of %s\n", aCard.value, aCard.suit); //? Accesso ai membri della struct tramite operatore .

     //* Definisco e inizializzo il puntatore *cardPtr di tipo struct card
     struct card *cardPtr;
     cardPtr = &aCard; //* Faccio puntare cardPtr all'indirizzo di memoria di aCard

     printf("%s", cardPtr->suit); //? Accesso al membro della struct tramite operatore ->
}