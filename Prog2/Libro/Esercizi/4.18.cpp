#include <iostream>
using namespace std;

//* Letti tre numeri in input determinare se sono in ordine numerico

int main()
{
     cout << "Inserire tre numeri interi" << endl;
     int x, y, j;
     cin >> x >> y >> j;

     if (x > y)
     {
          cout << "I numeri non sono in ordine numerico" << endl;
     }

     else if (j < y)
     {
          cout << "I numeri non sono in ordine numerico" << endl;
     }

     else
          cout << "I numeri sono in ordine numerico" << endl;
}
