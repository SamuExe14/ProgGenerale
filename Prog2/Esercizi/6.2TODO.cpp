//* Scrivere un programma che raccolga le temperature
//* di una città in una settimana e visualizzi a
//* schermo la temperatura maggiore e minore raggiunte

#include <cstddef>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

struct temperature
{
     string giorno;
     float temperatura;
};

void ricerca(temperature temp[])
{
     float max = temp[0].temperatura;
     // string giorno = temp[0].giorno;

     for (size_t i = 0; i < 7; i++)
     {
          if (temp[i].temperatura >= max)
          {
               max = temp[i].temperatura;
               // giorno = temp[i].giorno;
          }
     }
     cout << "La temperatura maggiore di questa settimana è: " << max << endl;
}
int main()
{
     cout << "Inserire temperature della settimana" << endl;
     temperature temp[7];

     for (size_t i = 0; i < 7; i++)
     {
          cin >> temp[i].temperatura;
     }
     ricerca(temp);
}