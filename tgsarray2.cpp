#include <iostream>
using namespace std;
int main()
{
    int i;
    char ganjil[20]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't'};
    for (i=0; i<=20; i++) {
        if (i%2!=0)
            cout << "hasil = " << ("hasil = %c\n", ganjil[i]) << endl;
    }
    return 0;
}