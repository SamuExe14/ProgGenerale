#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
   ifstream fin("myFile.txt");

   char *array = new char;
   if (!fin)
   {
      cerr << "Non è stato possibile aprire il file" << endl;
      exit(-1);
   }
   fin.getline(array, 20);
   cout << array << endl;

   ofstream fout("newFile.txt", ios::out);

   while (fin.get() != EOF)
   {
      fin.get(array, 20);
      cout << array << endl;
      fout << array << endl;
   }

   delete array;
}