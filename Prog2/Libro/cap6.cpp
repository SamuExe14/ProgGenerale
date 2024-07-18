#include <iostream>
using namespace std;

struct persona
{
     string nome;
     string cognome;
     int età;
};

struct impiegato //* È possibile costruire una struct annidata, alla quale si può accedere con un doppio operatore punto
{
     // persona persona;
     float salario;
     struct persona;
};

struct CD
{
     char titolo[20];
     char artista[20];
     int num_canzoni;
     float prezzo;
     char data_compra[8];
} cd1, cd2;

int main()
{
     persona persona1; //* Si può definire una variabile struct in questo modo
     persona samuele = {"Samuele", "Leonardi", 20};
     cout << samuele.nome << " "<< samuele.cognome << " "<< samuele.età << endl;
     impiegato impiegato1;

     CD cd1; //! È possibile creare una struct senza includere la parola struct 

     //! ARRAY DI STRUCT
     persona persone[100];

     persone[0].nome = "Samuele";
     persone[0].cognome = "Leonardi";
     persone[0].età = 20;

     cout << persone[0].nome << endl;
}