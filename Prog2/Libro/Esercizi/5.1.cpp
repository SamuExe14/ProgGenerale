#include <cctype>
#include <iostream>
using namespace std;

bool Cifra(char n)
{
     n = isdigit(n);

     if (n == true)
     {
          cout << "Il numero è una cifra\n";
     }
     else
     {
          cout << "Il numero non è una cifra\n";
     }
     return n;
}

int main()
{
     char num;
     cout << "Inserire un carattere per sapere se è un numero" << endl;
     cin >> num;
     Cifra(num);
     // cout << isdigit(num);
}