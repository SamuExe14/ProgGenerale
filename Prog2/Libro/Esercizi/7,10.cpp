#include <iostream>
using namespace std;

double func(double *ptr, int m)
{
     double min = ptr[1];

     for (size_t i = 0; i < m; ++i)
     {
          if (ptr[i] < min)
          {
               min = ptr[i];
          }
     }
     cout << &min << endl;
     return min;
}

int main()
{
     double array[] = {1.1, 2.2, 3.3, 4.4, 5, 6, 7, 8, 9, 10};

     func(array, 10);
}