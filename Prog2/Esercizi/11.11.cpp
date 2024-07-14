#include <iomanip>
#include <iostream>
using namespace std;

class Ora
{
private:
     int ore;
     int minuti;
     int secondi;

public:
     Ora()
     {
          ore = 0;
          minuti = 0;
          secondi = 0;
     }

     Ora(int ora, int minuto, int secondo)
     {
          ore = ora;
          minuti = minuto;
          secondi = secondo;
     }
     void get_ora();

     ~Ora()
     {
          cout << "È stato chiamato il distruttore\n";
     };
};

void Ora::get_ora()
{

     cout << ore << ":" << minuti << ":" << secondi << endl;
}

int main()
{
     Ora ora;
     ora.get_ora();
     Ora ora1(1, 2, 3);
     ora1.get_ora();
}