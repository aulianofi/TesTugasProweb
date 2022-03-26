#include <iostream>
using namespace std;

int main()
{
   int x, y;

   x = 5;
   y = 10;

   y+=x;
   cout << "hasil dari y += x adalah " << y << endl;

   y-=x;
   cout << "hasil dari y -= x adalah " << y << endl;

   y*=x;
   cout << "hasil dari y *= x adalah " << y << endl;

   y/=x;
   cout << "hasil dari y /= x adalah " << y << endl;

   y%=x;
   cout << "hasil dari y %= x adalah " << y << endl;

   return 0;
}