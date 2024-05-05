#include <iostream>
using namespace std;
//! CLASSI E OGGETTI

class Nome_classe
{
private:
     // attributi
     // metodi
protected:
     // attributi
     // metodi
public:
     // attributi
     // metodi
};

class Semaforo
{
public:
     void Semaforo::mostrare_colore(colore c); // nel caso in cui la definizione di un metodo fosse fatto altrove
     // deve contenere il riferimento alla classe alla quale appartengono mediante l'operatore di risoluzione di visibilità ::

private:
     enum colore
     {
          VERDE,
          GIALLO,
          ROSSO
     };
     void cambiareColore(colore);
};

class Studente
{
     long numID;
     char nome[40]; // tutti questi attributi sono private di default anche senza specificarlo
     int età;

public:
     long leggereID();
     char *leggereNome();
     int leggereEtà();
};

class Demo
{
public:
     void funz1(int P1);
     void funz2(int P2);
};

class Radio
{
private:
     float frequenza;
     int volume;

public:
     void accende();
     void aumenta_frequenza();
     void diminuisce_frequenza();
     void aumenta_volume();
     void diminuisce_volume();
};

void Radio::accende() //! è possibile definire una funzione dichiarata altrove con l'operatore ::
{
     frequenza = 99.99;
     volume = 45;
}

void Radio::aumenta_frequenza()
{
     frequenza++;
}

void Radio::diminuisce_frequenza()
{
     frequenza--;
}

void Radio::aumenta_volume()
{
     volume++;
}

void Radio::diminuisce_volume()
{
     volume--;
}

int main()
{
     Studente studente1; //* definizione di un'istanza della classe Studente

     Demo demo1;
     demo1.funz1(2024); // si accede ai metodi di una classe tramite l'operatore .

     Radio myRadio;
     myRadio.accende();
}