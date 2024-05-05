#include <fstream>
#include <ios>
#include <iostream>
#include <iomanip>
using namespace std;

//! FLUSSI E FILE
int main()
{
     // La classe istream rappresenta il suo stato tramite flags: good, bad e fail
     cin.good();
     cin.bad();
     cin.fail();

     // La classe ostream fornisce i metodi put() per inserire un unico carattere nel flusso di output
     // e il metodo write() per inserirvi una stringa

     cout.put('z');
     char lettera[6] = "\nksad";
     cout.put(lettera[1]);   // unico carattere
     cout.write(lettera, 5); // intera stringa
     cout << endl;
     char nome[20];
     char cognome[15];

     // cout << "Inserire nome e cognome" << endl;
     // cin >> nome;
     // cin >> cognome;
     // ofstream stampante("PRN.txt"); // crea una variabile stampante di tipo ofstream creando un file PRN.txt
     // stampante << "Il nome completo è" << endl; // stampante diventa il nostro stream
     // stampante << nome << cognome << endl;
     // return 0;

     float i = 30.0938741;
     cout << setprecision(3) << i << endl; // imposta la precisione di un numero in virgola mobile
     //* dec; conversione decimale
     //* hex; conversione esadeciamale
     //* oct; conversione ottale
     //* ws;  estrae caratteri spazi in bianco
     //* ends; aggiunge il carattere nullo
     //* setbase(0,8,10,16); stabilisce la base di conversione a n
     //* setprecision(n); stabilisce la precisione in virgola mobile a n
     //* setw(); stabilisce la larghezza del campo a n
     int z = 79;
     cout << hex << z << endl; // restituisce 4f
     cout << setbase(2) << z << endl;

     cout.width(10); // usato per impostare la larghezza del campo della prossima istruzione cout
     cout << "ciao"
          << "bello" << endl;

     cout << "ABC";
     cout.width(5);
     cout.fill('.'); // riempie gli spazi bianchi con il carattere desiderato
     cout << "DEF" << endl;

     ifstream fin("prova"); // crea l'oggetto fin per l'apertura di un file in lettura
     char prova[5];

     fin >> prova;
     cout << prova;

     ofstream fout("prova", ios::app); // bisogna specificare se in modalità ios::out(output) o ios::app(append)
     fout << "myProva";

     ifstream fInput("nomeFile.txt"); // si crea un flusso input a un file
     if (!fin)
     {
          cerr << "Non è stato possibile aprire il file\n";
          exit(-1);
     }
     ofstream fOutput("nomeFile.txt", ios::app); // si crea un flusso output a un file

     //---------------------------------------------------------//

     cout << "Scrivere il nome del file\n";
     char nomeFile[20];
     cin >> nomeFile;
     ifstream inputFile(nomeFile);
     if (!inputFile)
     {
          cerr << "Non è stato possibile aprire il file " << nomeFile;
          return -1;
     }

     char car;
     while (inputFile.get(car))
     {
          cout.put(car);
     }
     return 0;

     // ifstream crea un flusso in input
     // ofstream crea un flusso in output
     // fstream crea un flusso input output
     //* ios::in -> input
     //* ios::app -> append
     //* ios::out -> output
     //* ios::ate -> aprire e cercare la fine del file
     //* ios::nocreate -> genera un errore se non esiste il file
     //* ios::trunc -> tronca il file a 0 se e siste già
     //* ios::noreplace -> genera un errore se il file esiste
     //* ios::binary -> il file si apre in modalità binaria

     fstream f;
     f.open("file_a_caso", ios::in | ios::out | ios::binary); // apre uno stream I/O in modalità binaria
     f.close(); // per chiudere lo stream verso il file

     
}
