#include <iostream>
using namespace std;

class Ogg_geom
{
public:
     Ogg_geom(float x = 0, float y = 0) : xC(x), yC(y) {}
     void stampa_centro()
     {
          cout << xC << " " << yC << endl;
     }

protected:
     float xC, yC;
};

const float PI = 3.14159265;

class Cerchio : public Ogg_geom
{
public:
     Cerchio(float x_C, float y_C, float r) : Ogg_geom(x_C, y_C)
     {
          raggio = r;
     }
     float area() const { return PI * raggio * raggio; }

private:
     float raggio;
};

class Quadrato : public Ogg_geom
{
public:
     Quadrato(float x_C, float y_C, float x, float y) : Ogg_geom(x_C, y_C)
     {
          x1 = x;
          y1 = y;
     }
     float area() const
     {
          float a, b;
          a = x1 - xC;
          b = y1 - yC;
          return 2 * (a * a + b * b);
     }

private:
     float x1, y1;
};


int main()
{
     Cerchio C(2, 2.5, 2);
     Quadrato Q(3, 3.5, 4.37, 3.85);

     cout << "Centro del cerchio: ";
     C.stampa_centro();

     cout << "Centro del quadrato: ";
     Q.stampa_centro();

     cout << "Area del cerchio: " << C.area() << endl;
     cout << "Area del quadrato: " << Q.area() << endl;

     return 0;
}