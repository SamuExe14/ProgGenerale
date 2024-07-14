#include <iostream>
#include <new>
using namespace std;

void overflow()
{
     cout << "Memoria insufficiente" << endl;
     exit(1);
}

int main()
{
     set_new_handler(overflow);
     int *entrata = new int[10];

     cout << "Inserire elementi nell'array" << endl;

     for (int i = 0; i < 10; ++i)
     {
          cin >> entrata[i];
     }
     for (int i = 0; i < 10; ++i)
     {
          cout << entrata[i] << endl;
     }

     delete[] entrata;
}