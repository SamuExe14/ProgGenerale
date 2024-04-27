#include <cctype>
#include <iostream>
using namespace std;

//! STRINGHE IN C++
int main(){
     // cin non è in grado di leggere stringhe dopo una tabulazione o un carattere d'invio
     char *stringa = new char;
     
     cin.getline(stringa, 50); // getline è in grado di leggere anche dopo la tabulazione
     cout << stringa << endl;
     delete stringa;

     char *new_string = new char;
     cin.get(stringa, 30); // get legge dal flusso carattere per carattere

     char first_string;
     cin.get(first_string); 
     cout.put(first_string);// cout.put stampa a schermo carattere per carattere
}