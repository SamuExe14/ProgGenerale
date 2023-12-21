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
